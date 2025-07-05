#include "FlowFieldAgent.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/StaticMesh.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"

AFlowFieldAgent::AFlowFieldAgent()
{
    PrimaryActorTick.bCanEverTick = true;
    
    // 设置默认值
    MovementSpeed = 300.0f;
    AgentRadius = 25.0f;
    UpdateDirectionInterval = 0.02f;
    CurrentMovementDirection = FVector2D::ZeroVector;
    TargetMovementDirection = FVector2D::ZeroVector;
    CurrentVelocity = FVector2D::ZeroVector;
    
    // RVO2默认参数
    NeighborRadius = 100.0f;
    TimeHorizon = 2.0f;
    MaxSpeed = 400.0f;
    bEnableRVO2 = true;
    bShowRVO2Debug = false;
    
    // 创建根组件
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    
    // 创建静态网格组件
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    MeshComponent->SetupAttachment(RootComponent);
    
    // 尝试加载默认的球体网格
    static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereMeshAsset(TEXT("/Engine/BasicShapes/Sphere"));
    if (SphereMeshAsset.Succeeded())
    {
        MeshComponent->SetStaticMesh(SphereMeshAsset.Object);
        MeshComponent->SetRelativeScale3D(FVector(AgentRadius / 50.0f)); // 调整大小
    }
    
    // 设置材质为红色
    static ConstructorHelpers::FObjectFinder<UMaterial> RedMaterialAsset(TEXT("/Engine/BasicShapes/BasicShapeMaterial"));
    if (RedMaterialAsset.Succeeded())
    {
        MeshComponent->SetMaterial(0, RedMaterialAsset.Object);
    }
}

void AFlowFieldAgent::BeginPlay()
{
    Super::BeginPlay();
    
    // 更新网格大小
    UpdateMeshScale();
    
    // 设置定时器更新移动方向
    if (UpdateDirectionInterval > 0.0f)
    {
        GetWorldTimerManager().SetTimer(DirectionUpdateTimerHandle, this, &AFlowFieldAgent::OnDirectionUpdateTimer, UpdateDirectionInterval, true);
    }
    
    // 立即更新一次方向
    //UpdateMovementDirection();
}

void AFlowFieldAgent::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
    // 计算首选速度（基于流场方向）
    FVector2D PreferredVelocity = CurrentMovementDirection * MovementSpeed;
    
    // 应用RVO2避障
    FVector2D NewVelocity = PreferredVelocity;
    if (bEnableRVO2)
    {
        NewVelocity = ComputeNewVelocity(PreferredVelocity);
    }
    
    // 更新当前位置
    FVector MovementVector = FVector(NewVelocity.X, NewVelocity.Y, 0.0f);
    FVector NewLocation = GetActorLocation() + MovementVector * DeltaTime;
    SetActorLocation(NewLocation);
    
    // 更新当前速度
    CurrentVelocity = NewVelocity;
    
    // 显示移动状态
    if (bShowDebugStrings)
    {
        FString StatusText = bEnableRVO2 ? TEXT("RVO2移动") : TEXT("正在移动");
        DrawDebugString(GetWorld(), GetActorLocation() + FVector(0, 0, 120), StatusText, nullptr, FColor::Green, 0.0f, true);
    }
    
    // 显示RVO2调试信息
    if (bShowDebugStrings && bShowRVO2Debug && bEnableRVO2)
    {
        DrawRVO2DebugInfo();
    }
}

void AFlowFieldAgent::SetFlowField(AFlowField* NewFlowField)
{
    FlowField = NewFlowField;
    bShowDebugStrings = FlowField->bShowDebugStrings;
    UpdateMovementDirection();
}

void AFlowFieldAgent::UpdateMovementDirection()
{
    // 调试信息：显示所有Agent的信息（无论是否有流场）
    if (bShowDebugStrings)
    {
        FString AgentText = FString::Printf(TEXT("单位位置：%s"), *GetActorLocation().ToString());
        DrawDebugString(GetWorld(), GetActorLocation() + FVector(0, 0, 100), AgentText, nullptr, FColor::Blue, 0.0f, true);
    }
    
    if (!FlowField)
    {
        if (bShowDebugStrings)
        {
            DrawDebugString(GetWorld(), GetActorLocation() + FVector(0, 0, 80), TEXT("错误：没有分配流场！"), nullptr, FColor::Red, 0.0f, true);
        }
        UE_LOG(LogTemp, Warning, TEXT("FlowFieldAgent: No flow field assigned!"));
        return;
    }
    
    // 检查当前位置是否在流场范围内
    FVector2D GridLocation = FlowField->WorldToGrid(GetActorLocation());
    if (bShowDebugStrings)
    {
        FString GridText = FString::Printf(TEXT("网格位置：(%d, %d)"), FMath::FloorToInt(GridLocation.X), FMath::FloorToInt(GridLocation.Y));
        DrawDebugString(GetWorld(), GetActorLocation() + FVector(0, 0, 110), GridText, nullptr, FColor::White, 0.0f, true);
    }
    
    if (!FlowField->IsLocationValid(GetActorLocation()))
    {
        if (bShowDebugStrings)
        {
            DrawDebugString(GetWorld(), GetActorLocation() + FVector(0, 0, 80), TEXT("在流场外，使用最近网格向量"), nullptr, FColor::Orange, 0.0f, true);
        }
        // 不返回，继续执行，让双线性插值函数处理边界情况
    }
    
    // 使用双线性插值计算移动方向
    FVector2D InterpolatedDirection = GetBilinearInterpolatedFlowVector(GetActorLocation());
    
    // 调试信息：显示插值方向信息
    if (bShowDebugStrings)
    {
        FString DirectionText = FString::Printf(TEXT("插值方向：%s\n方向大小：%.2f"), 
                                               *InterpolatedDirection.ToString(), 
                                               InterpolatedDirection.Size());
        DrawDebugString(GetWorld(), GetActorLocation() + FVector(0, 0, 90), DirectionText, nullptr, FColor::Cyan, 0.0f, true);
    }
    
    UE_LOG(LogTemp, Log, TEXT("Agent at %s - InterpolatedDirection: %s, Size: %f"), 
           *GetActorLocation().ToString(), *InterpolatedDirection.ToString(), InterpolatedDirection.Size());
    
    if (InterpolatedDirection.SizeSquared() > 0.0f)
    {
        TargetMovementDirection = InterpolatedDirection.GetSafeNormal();
        CurrentMovementDirection = TargetMovementDirection;
        
        // 调试信息
        if (bShowDebugStrings)
        {
            FString MoveText = FString::Printf(TEXT("移动方向：%s"), *CurrentMovementDirection.ToString());
            DrawDebugString(GetWorld(), GetActorLocation() + FVector(0, 0, 80), MoveText, nullptr, FColor::Green, 0.0f, true);
        }
        
        UE_LOG(LogTemp, Log, TEXT("Agent moving in direction: %s"), *CurrentMovementDirection.ToString());
    }
    else
    {
        // 如果插值方向为零，尝试直接获取当前位置的流向向量
        FVector2D DirectVector = FlowField->GetFlowVectorAtLocation(GetActorLocation());
        
        if (DirectVector.SizeSquared() > 0.0f)
        {
            TargetMovementDirection = DirectVector.GetSafeNormal();
            CurrentMovementDirection = TargetMovementDirection;
            
            if (bShowDebugStrings)
            {
                FString DirectText = FString::Printf(TEXT("直接向量：%s"), *CurrentMovementDirection.ToString());
                DrawDebugString(GetWorld(), GetActorLocation() + FVector(0, 0, 60), DirectText, nullptr, FColor::Orange, 0.0f, true);
            }
            
            UE_LOG(LogTemp, Log, TEXT("Using direct vector: %s"), *CurrentMovementDirection.ToString());
        }
        else
        {
            // 如果还是零向量，停止移动
            CurrentMovementDirection = FVector2D::ZeroVector;
            
            if (bShowDebugStrings)
            {
                DrawDebugString(GetWorld(), GetActorLocation() + FVector(0, 0, 40), TEXT("警告：没有有效移动方向！"), nullptr, FColor::Red, 0.0f, true);
            }
            
            UE_LOG(LogTemp, Warning, TEXT("Agent has no valid movement direction!"));
        }
    }
}

FVector2D AFlowFieldAgent::GetBilinearInterpolatedFlowVector(const FVector& WorldLocation) const
{
    if (!FlowField)
        return FVector2D::ZeroVector;
    
    // 获取世界坐标对应的网格坐标
    FVector2D GridLocation = FlowField->WorldToGrid(WorldLocation);
    
    if (!FlowField->IsGridIndexValid(GridLocation))
    {
        // 完全在流场外，获取最近的流场网格向量
        FVector2D ClampedGrid = FVector2D(
            FMath::Clamp(GridLocation.X, 0.0f, FlowField->GridWidth - 1.0f),
            FMath::Clamp(GridLocation.Y, 0.0f, FlowField->GridHeight - 1.0f)
        );
        return FlowField->GetFlowVectorAtLocation(FlowField->GridToWorld(ClampedGrid));
    }
    
    // 计算四个角落的网格坐标
    FVector2D GridMin(FMath::Floor(GridLocation.X), FMath::Floor(GridLocation.Y));
    FVector2D GridMax = GridMin + FVector2D(1.0f, 1.0f);
    
    // 确保网格坐标在有效范围内
    GridMin.X = FMath::Clamp(GridMin.X, 0.0f, FlowField->GridWidth - 1.0f);
    GridMin.Y = FMath::Clamp(GridMin.Y, 0.0f, FlowField->GridHeight - 1.0f);
    GridMax.X = FMath::Clamp(GridMax.X, 0.0f, FlowField->GridWidth - 1.0f);
    GridMax.Y = FMath::Clamp(GridMax.Y, 0.0f, FlowField->GridHeight - 1.0f);
    
    // 获取四个角落的流向向量
    TArray<FVector2D> CornerVectors;
    CornerVectors.Add(FlowField->GetFlowVectorAtLocation(FlowField->GridToWorld(GridMin)));
    CornerVectors.Add(FlowField->GetFlowVectorAtLocation(FlowField->GridToWorld(FVector2D(GridMax.X, GridMin.Y))));
    CornerVectors.Add(FlowField->GetFlowVectorAtLocation(FlowField->GridToWorld(FVector2D(GridMin.X, GridMax.Y))));
    CornerVectors.Add(FlowField->GetFlowVectorAtLocation(FlowField->GridToWorld(GridMax)));
    
    // 计算插值权重
    FVector2D Weights;
    Weights.X = FMath::Frac(GridLocation.X);
    Weights.Y = FMath::Frac(GridLocation.Y);
    
    // 执行双线性插值
    return BilinearInterpolate(CornerVectors, Weights);
}

TArray<FVector2D> AFlowFieldAgent::GetOccupiedGridCells(const FVector& WorldLocation) const
{
    TArray<FVector2D> OccupiedCells;
    
    if (!FlowField)
        return OccupiedCells;
    
    // 计算单位占据的网格范围
    float GridRadius = AgentRadius / FlowField->CellSize;
    FVector2D CenterGrid = FlowField->WorldToGrid(WorldLocation);
    
    int32 MinX = FMath::Max(0, FMath::FloorToInt(CenterGrid.X - GridRadius));
    int32 MaxX = FMath::Min(FlowField->GridWidth - 1, FMath::CeilToInt(CenterGrid.X + GridRadius));
    int32 MinY = FMath::Max(0, FMath::FloorToInt(CenterGrid.Y - GridRadius));
    int32 MaxY = FMath::Min(FlowField->GridHeight - 1, FMath::CeilToInt(CenterGrid.Y + GridRadius));
    
    // 检查每个可能的网格
    for (int32 Y = MinY; Y <= MaxY; ++Y)
    {
        for (int32 X = MinX; X <= MaxX; ++X)
        {
            FVector2D GridLocation(X, Y);
            FVector CellCenter = FlowField->GridToWorld(GridLocation);
            
            // 检查单位是否真的占据这个网格
            float Distance = FVector::Dist2D(WorldLocation, CellCenter);
            if (Distance <= AgentRadius)
            {
                OccupiedCells.Add(GridLocation);
            }
        }
    }
    
    return OccupiedCells;
}

void AFlowFieldAgent::OnDirectionUpdateTimer()
{
    UpdateMovementDirection();
}

void AFlowFieldAgent::UpdateMeshScale()
{
    if (MeshComponent)
    {
        // 根据AgentRadius调整网格大小
        float Scale = AgentRadius / 50.0f; // 假设默认球体半径为50
        MeshComponent->SetRelativeScale3D(FVector(Scale));
    }
}

FVector2D AFlowFieldAgent::BilinearInterpolate(const TArray<FVector2D>& CornerVectors, const FVector2D& Weights) const
{
    if (CornerVectors.Num() != 4)
        return FVector2D::ZeroVector;
    
    // 双线性插值公式
    // result = (1-wx)(1-wy)*v00 + wx*(1-wy)*v10 + (1-wx)*wy*v01 + wx*wy*v11
    
    FVector2D Result = FVector2D::ZeroVector;
    
    // v00 (左下角)
    Result += CornerVectors[0] * (1.0f - Weights.X) * (1.0f - Weights.Y);
    
    // v10 (右下角)
    Result += CornerVectors[1] * Weights.X * (1.0f - Weights.Y);
    
    // v01 (左上角)
    Result += CornerVectors[2] * (1.0f - Weights.X) * Weights.Y;
    
    // v11 (右上角)
    Result += CornerVectors[3] * Weights.X * Weights.Y;
    
    return Result;
}

// RVO2避障实现
FVector2D AFlowFieldAgent::CalculateRVO2Velocity(const FVector2D& PreferredVelocity)
{
    return ComputeNewVelocity(PreferredVelocity);
}

TArray<AFlowFieldAgent*> AFlowFieldAgent::GetNearbyAgents() const
{
    TArray<AFlowFieldAgent*> NearbyAgents;
    
    if (!GetWorld())
        return NearbyAgents;
    
    // 获取所有FlowFieldAgent
    TArray<AActor*> FoundAgents;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFlowFieldAgent::StaticClass(), FoundAgents);
    
    FVector CurrentLocation = GetActorLocation();
    
    for (AActor* Actor : FoundAgents)
    {
        AFlowFieldAgent* Agent = Cast<AFlowFieldAgent>(Actor);
        if (Agent && Agent != this)
        {
            float Distance = FVector::Dist2D(CurrentLocation, Agent->GetActorLocation());
            if (Distance <= NeighborRadius)
            {
                NearbyAgents.Add(Agent);
            }
        }
    }
    
    return NearbyAgents;
}

FVelocityObstacle AFlowFieldAgent::ComputeVelocityObstacle(const AFlowFieldAgent* OtherAgent) const
{
    if (!OtherAgent)
        return FVelocityObstacle();
    
    FVector2D RelativePosition = FVector2D(
        OtherAgent->GetActorLocation().X - GetActorLocation().X,
        OtherAgent->GetActorLocation().Y - GetActorLocation().Y
    );
    
    float CombinedRadius = AgentRadius + OtherAgent->AgentRadius;
    float Distance = RelativePosition.Size();
    
    // 如果距离太远，不产生速度障碍物
    if (Distance > NeighborRadius)
        return FVelocityObstacle();
    
    // 计算速度障碍物的顶点（apex）
    FVector2D Apex = CurrentVelocity;
    
    // 计算速度障碍物的两条边
    FVector2D RelativeVelocity = OtherAgent->CurrentVelocity - CurrentVelocity;
    
    // 计算速度障碍物的角度
    float Angle = FMath::Atan2(RelativePosition.Y, RelativePosition.X);
    float HalfAngle = FMath::Asin(CombinedRadius / Distance);
    
    // 计算左右边界
    FVector2D LeftLeg = FVector2D(
        FMath::Cos(Angle + HalfAngle),
        FMath::Sin(Angle + HalfAngle)
    ) * MaxSpeed;
    
    FVector2D RightLeg = FVector2D(
        FMath::Cos(Angle - HalfAngle),
        FMath::Sin(Angle - HalfAngle)
    ) * MaxSpeed;
    
    return FVelocityObstacle(Apex, LeftLeg, RightLeg);
}

bool AFlowFieldAgent::IsVelocityInObstacle(const FVector2D& Velocity, const FVelocityObstacle& Obstacle) const
{
    // 检查速度是否在速度障碍物内
    FVector2D RelativeVelocity = Velocity - Obstacle.Apex;
    
    // 计算叉积来判断点是否在扇形区域内
    float CrossLeft = FVector2D::CrossProduct(RelativeVelocity, Obstacle.LeftLeg);
    float CrossRight = FVector2D::CrossProduct(RelativeVelocity, Obstacle.RightLeg);
    
    // 如果速度在左右边界之间，则在障碍物内
    return CrossLeft >= 0.0f && CrossRight <= 0.0f;
}

FVector2D AFlowFieldAgent::FindBestVelocity(const FVector2D& PreferredVelocity, const TArray<FVelocityObstacle>& Obstacles) const
{
    // 如果没有障碍物，直接返回首选速度
    if (Obstacles.Num() == 0)
    {
        return PreferredVelocity.GetSafeNormal() * FMath::Min(PreferredVelocity.Size(), MaxSpeed);
    }
    
    // 检查首选速度是否可行
    bool PreferredVelocityValid = true;
    for (const FVelocityObstacle& Obstacle : Obstacles)
    {
        if (IsVelocityInObstacle(PreferredVelocity, Obstacle))
        {
            PreferredVelocityValid = false;
            break;
        }
    }
    
    if (PreferredVelocityValid)
    {
        return PreferredVelocity.GetSafeNormal() * FMath::Min(PreferredVelocity.Size(), MaxSpeed);
    }
    
    // 寻找最佳速度
    FVector2D BestVelocity = FVector2D::ZeroVector;
    float BestDistance = FLT_MAX;
    
    // 在速度空间中采样多个候选速度
    const int32 NumSamples = 36; // 每10度采样一次
    for (int32 i = 0; i < NumSamples; ++i)
    {
        float Angle = 2.0f * PI * i / NumSamples;
        for (float Speed = 0.0f; Speed <= MaxSpeed; Speed += MaxSpeed / 10.0f)
        {
            FVector2D CandidateVelocity = FVector2D(
                FMath::Cos(Angle) * Speed,
                FMath::Sin(Angle) * Speed
            );
            
            // 检查候选速度是否可行
            bool Valid = true;
            for (const FVelocityObstacle& Obstacle : Obstacles)
            {
                if (IsVelocityInObstacle(CandidateVelocity, Obstacle))
                {
                    Valid = false;
                    break;
                }
            }
            
            if (Valid)
            {
                float Distance = FVector2D::DistSquared(CandidateVelocity, PreferredVelocity);
                if (Distance < BestDistance)
                {
                    BestDistance = Distance;
                    BestVelocity = CandidateVelocity;
                }
            }
        }
    }
    
    return BestVelocity;
}

FVector2D AFlowFieldAgent::ComputeNewVelocity(const FVector2D& PreferredVelocity)
{
    // 获取附近的Agent
    TArray<AFlowFieldAgent*> NearbyAgents = GetNearbyAgents();
    
    // 计算所有速度障碍物
    TArray<FVelocityObstacle> Obstacles;
    for (AFlowFieldAgent* Agent : NearbyAgents)
    {
        FVelocityObstacle Obstacle = ComputeVelocityObstacle(Agent);
        if (Obstacle.LeftLeg.SizeSquared() > 0.0f || Obstacle.RightLeg.SizeSquared() > 0.0f)
        {
            Obstacles.Add(Obstacle);
        }
    }
    
    // 寻找最佳速度
    return FindBestVelocity(PreferredVelocity, Obstacles);
}

void AFlowFieldAgent::DrawRVO2DebugInfo()
{
    if (!GetWorld())
        return;
    
    FVector CurrentLocation = GetActorLocation();
    
    // 绘制邻居半径 - 在XY平面上绘制圆圈
    FVector CircleCenter = CurrentLocation;
    FVector CircleNormal = FVector(0, 0, 1); // Z轴向上，圆圈在XY平面
    DrawDebugCircle(GetWorld(), CircleCenter, NeighborRadius, 32, FColor::Yellow, false, 0.0f, 0, 2.0f, CircleNormal);
    
    // 绘制当前速度
    if (CurrentVelocity.SizeSquared() > 0.0f)
    {
        FVector VelocityEnd = CurrentLocation + FVector(CurrentVelocity.X, CurrentVelocity.Y, 0.0f) * 0.1f;
        DrawDebugLine(GetWorld(), CurrentLocation, VelocityEnd, FColor::Green, false, 0.0f, 0, 3.0f);
    }
    
    // 绘制速度障碍物
    TArray<AFlowFieldAgent*> NearbyAgents = GetNearbyAgents();
    for (AFlowFieldAgent* Agent : NearbyAgents)
    {
        FVelocityObstacle Obstacle = ComputeVelocityObstacle(Agent);
        
        // 绘制速度障碍物的顶点
        FVector ApexWorld = CurrentLocation + FVector(Obstacle.Apex.X, Obstacle.Apex.Y, 0.0f) * 0.1f;
        DrawDebugPoint(GetWorld(), ApexWorld, 5.0f, FColor::Red, false, 0.0f, 0);
        
        // 绘制速度障碍物的边界
        FVector LeftEnd = ApexWorld + FVector(Obstacle.LeftLeg.X, Obstacle.LeftLeg.Y, 0.0f) * 0.1f;
        FVector RightEnd = ApexWorld + FVector(Obstacle.RightLeg.X, Obstacle.RightLeg.Y, 0.0f) * 0.1f;
        
        DrawDebugLine(GetWorld(), ApexWorld, LeftEnd, FColor::Red, false, 0.0f, 0, 2.0f);
        DrawDebugLine(GetWorld(), ApexWorld, RightEnd, FColor::Red, false, 0.0f, 0, 2.0f);
    }
    
    // 显示RVO2信息
    if (bShowDebugStrings)
    {
        FString RVO2Text = FString::Printf(TEXT("RVO2: 邻居数=%d, 速度=%.1f"), NearbyAgents.Num(), CurrentVelocity.Size());
        DrawDebugString(GetWorld(), CurrentLocation + FVector(0, 0, 140), RVO2Text, nullptr, FColor::Cyan, 0.0f, true);
    }
} 