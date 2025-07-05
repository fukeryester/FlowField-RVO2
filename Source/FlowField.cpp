#include "FlowField.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "TimerManager.h"

AFlowField::AFlowField()
{
    PrimaryActorTick.bCanEverTick = true;
    
    // 设置默认值
    CellSize = 100.0f;
    GridWidth = 50;
    GridHeight = 50;
    UpdateInterval = 1.0f;
    bIsDebugging = false;
}

void AFlowField::BeginPlay()
{
    Super::BeginPlay();
    
    // 重置绘制标志
    bHasDrawn = false;
    
    // 初始化流场
    InitializeFlowField();

    if (bIsDebugging)
    {
        DrawDebugFlowField();
    }
    
    // 设置定时器更新流场
    if (UpdateInterval > 0.0f)
    {
        GetWorldTimerManager().SetTimer(UpdateTimerHandle, this, &AFlowField::UpdateFlowField, UpdateInterval, true);
    }
    
    // 设置定时器定期绘制调试信息
    if (bIsDebugging)
    {
        DrawDebugFlowField();
        GetWorldTimerManager().SetTimer(DebugDrawTimerHandle, this, &AFlowField::DrawDebugFlowField, 2.0f, true);
    }
}

void AFlowField::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
    // 在调试模式下持续绘制障碍物反向向量
    if (bShowDebugStrings && bEnableObstacleRepulsion)
    {
        DrawObstacleRepulsionVectors();
    }
}

void AFlowField::InitializeFlowField()
{
    // 计算流场原点（以Actor位置为中心）
    FieldOrigin = GetActorLocation();
    FieldOrigin.X -= (GridWidth * CellSize) * 0.5f;
    FieldOrigin.Y -= (GridHeight * CellSize) * 0.5f;
    
    // 初始化网格
    FlowFieldGrid.SetNum(GridWidth * GridHeight);
    
    // 检测障碍物
    DetectObstacles();
    
    // 计算流场
    UpdateFlowField();
}

void AFlowField::UpdateFlowField()
{
    if (!TargetActor)
    {
        UE_LOG(LogTemp, Warning, TEXT("FlowField: No target actor set!"));
        return;
    }
    
    // 重新检测障碍物（以防场景发生变化）
    DetectObstacles();
    
    // 计算热力图
    CalculateHeatMap();
    
    // 计算向量场
    CalculateVectorField();
    
    // 统计有效的流向向量
    int32 ValidVectors = 0;
    for (const FFlowFieldCell& Cell : FlowFieldGrid)
    {
        if (Cell.FlowVector.SizeSquared() > 0.0f)
        {
            ValidVectors++;
        }
    }
    
    // 在屏幕上显示调试信息
    if (bShowDebugStrings)
    {
        FString DebugText = FString::Printf(TEXT("流场状态：有效流向向量 %d/%d 个"), ValidVectors, FlowFieldGrid.Num());
        DrawDebugString(GetWorld(), GetActorLocation() + FVector(0, 0, 200), DebugText, nullptr, FColor::Green, 0.0f, true);
    }
    
    UE_LOG(LogTemp, Log, TEXT("FlowField updated successfully - Valid vectors: %d/%d"), 
           ValidVectors, FlowFieldGrid.Num());
}

void AFlowField::DetectObstacles()
{
    // 遍历所有网格，检测障碍物
    for (int32 Y = 0; Y < GridHeight; ++Y)
    {
        for (int32 X = 0; X < GridWidth; ++X)
        {
            FVector2D GridLocation(X, Y);
            int32 Index = GridToIndex(GridLocation);
            
            if (Index >= 0 && Index < FlowFieldGrid.Num())
            {
                FVector WorldLocation = GridToWorld(GridLocation);
                
                // 检测该位置是否有WorldDynamic碰撞的物体
                FCollisionQueryParams QueryParams;
                QueryParams.bTraceComplex = false;
                QueryParams.bIgnoreTouches = true; // 忽略接触，只检测重叠
                
                // 使用可配置的检测半径进行障碍物检测
                float TraceRadius = CellSize * ObstacleDetectionRadius;
                FVector StartLocation = WorldLocation + FVector(0, 0, 100.0f); // 从更高处开始检测
                FVector EndLocation = WorldLocation + FVector(0, 0, 10.0f);   // 只检测到地面以上10单位
                
                // 根据设置决定是否启用障碍物检测
                bool bHit = false;
                if (bEnableObstacleDetection)
                {
                    if (bUseAggressiveObstacleDetection)
                    {
                        // 激进的检测：使用多个检测点确保检测到任何障碍物
                        TArray<FVector> TestPoints;
                        TestPoints.Add(WorldLocation); // 中心点
                        TestPoints.Add(WorldLocation + FVector(TraceRadius * 0.5f, 0, 0)); // 右
                        TestPoints.Add(WorldLocation + FVector(-TraceRadius * 0.5f, 0, 0)); // 左
                        TestPoints.Add(WorldLocation + FVector(0, TraceRadius * 0.5f, 0)); // 前
                        TestPoints.Add(WorldLocation + FVector(0, -TraceRadius * 0.5f, 0)); // 后
                        TestPoints.Add(WorldLocation + FVector(TraceRadius * 0.5f, TraceRadius * 0.5f, 0)); // 右上
                        TestPoints.Add(WorldLocation + FVector(-TraceRadius * 0.5f, TraceRadius * 0.5f, 0)); // 左上
                        TestPoints.Add(WorldLocation + FVector(TraceRadius * 0.5f, -TraceRadius * 0.5f, 0)); // 右下
                        TestPoints.Add(WorldLocation + FVector(-TraceRadius * 0.5f, -TraceRadius * 0.5f, 0)); // 左下
                        
                        // 对每个测试点进行检测
                        for (const FVector& TestPoint : TestPoints)
                        {
                            bHit = GetWorld()->SweepTestByChannel(
                                TestPoint + FVector(0, 0, 100.0f), // 从上方100单位开始
                                TestPoint + FVector(0, 0, 10.0f),  // 检测到地面以上10单位
                                FQuat::Identity,
                                ECollisionChannel::ECC_WorldDynamic,
                                FCollisionShape::MakeSphere(TraceRadius * 0.3f), // 使用较小的检测球
                                QueryParams
                            );
                            
                            if (bHit) break; // 只要有一个点检测到障碍物就标记为障碍物
                        }
                    }
                    else
                    {
                        // 标准检测：使用单个大球体检测
                        bHit = GetWorld()->SweepTestByChannel(
                            WorldLocation + FVector(0, 0, 100.0f), // 从上方100单位开始
                            WorldLocation + FVector(0, 0, 10.0f),  // 检测到地面以上10单位
                            FQuat::Identity,
                            ECollisionChannel::ECC_WorldDynamic,
                            FCollisionShape::MakeSphere(TraceRadius),
                            QueryParams
                        );
                    }
                }
                
                FlowFieldGrid[Index].bIsObstacle = bHit;
                
                // 调试信息：只在第一个格子输出
                if (X == 0 && Y == 0 && bShowDebugStrings)
                {
                    FString GridText = FString::Printf(TEXT("网格(0,0)位置：%s\n检测半径：%.1f\n激进检测：%s\n是否为障碍物：%s"), 
                                                      *WorldLocation.ToString(), 
                                                      TraceRadius,
                                                      bUseAggressiveObstacleDetection ? TEXT("是") : TEXT("否"),
                                                      bHit ? TEXT("是") : TEXT("否"));
                    DrawDebugString(GetWorld(), WorldLocation + FVector(0, 0, 100), GridText, nullptr, FColor::Yellow, 0.0f, true);
                    
                    UE_LOG(LogTemp, Log, TEXT("Grid (0,0) - WorldLocation: %s, DetectionRadius: %.1f, Aggressive: %s, bIsObstacle: %s"), 
                           *WorldLocation.ToString(), TraceRadius, bUseAggressiveObstacleDetection ? TEXT("true") : TEXT("false"), bHit ? TEXT("true") : TEXT("false"));
                }
            }
        }
    }
    
    // 统计障碍物数量
    int32 ObstacleCount = 0;
    for (const FFlowFieldCell& Cell : FlowFieldGrid)
    {
        if (Cell.bIsObstacle)
        {
            ObstacleCount++;
        }
    }
    
    // 在屏幕上显示障碍物检测信息
    if (bShowDebugStrings)
    {
        FString ObstacleText = FString::Printf(TEXT("障碍物检测：发现 %d/%d 个障碍物"), ObstacleCount, FlowFieldGrid.Num());
        DrawDebugString(GetWorld(), GetActorLocation() + FVector(0, 0, 150), ObstacleText, nullptr, FColor::Red, 0.0f, true);
    }
    
    UE_LOG(LogTemp, Log, TEXT("Obstacle detection completed - Total cells: %d, Obstacles: %d"), 
           FlowFieldGrid.Num(), ObstacleCount);
}

void AFlowField::CalculateHeatMap()
{
    if (!TargetActor)
        return;
    
    // 重置所有距离值
    for (int32 i = 0; i < FlowFieldGrid.Num(); ++i)
    {
        FlowFieldGrid[i].Distance = -1.0f;
    }
    
    // 获取目标位置对应的网格
    FVector2D TargetGrid = WorldToGrid(TargetActor->GetActorLocation());
    
    if (!IsGridIndexValid(TargetGrid))
    {
        UE_LOG(LogTemp, Warning, TEXT("Target is outside flow field bounds!"));
        return;
    }
    
    int32 TargetIndex = GridToIndex(TargetGrid);
    FlowFieldGrid[TargetIndex].Distance = 0.0f;
    
    // 使用队列进行广度优先搜索
    TArray<FVector2D> Queue;
    Queue.Add(TargetGrid);
    
    TArray<FVector2D> NeighborDirections = GetNeighborDirections();
    
    while (Queue.Num() > 0)
    {
        FVector2D CurrentGrid = Queue[0];
        Queue.RemoveAt(0);
        
        int32 CurrentIndex = GridToIndex(CurrentGrid);
        float CurrentDistance = FlowFieldGrid[CurrentIndex].Distance;
        
        // 检查四个方向的邻居
        for (const FVector2D& Direction : NeighborDirections)
        {
            FVector2D NeighborGrid = CurrentGrid + Direction;
            
            if (IsGridIndexValid(NeighborGrid))
            {
                int32 NeighborIndex = GridToIndex(NeighborGrid);
                
                // 如果邻居未被访问且不是障碍物
                if (FlowFieldGrid[NeighborIndex].Distance == -1.0f && !FlowFieldGrid[NeighborIndex].bIsObstacle)
                {
                    FlowFieldGrid[NeighborIndex].Distance = CurrentDistance + 1.0f;
                    Queue.Add(NeighborGrid);
                }
            }
        }
    }
}

void AFlowField::CalculateVectorField()
{
    // 遍历所有网格，计算流向向量
    for (int32 Y = 0; Y < GridHeight; ++Y)
    {
        for (int32 X = 0; X < GridWidth; ++X)
        {
            FVector2D GridLocation(X, Y);
            int32 Index = GridToIndex(GridLocation);
            
            if (Index >= 0 && Index < FlowFieldGrid.Num())
            {
                // 如果是障碍物或未访问的格子，跳过
                if (FlowFieldGrid[Index].bIsObstacle || FlowFieldGrid[Index].Distance == -1.0f)
                {
                    FlowFieldGrid[Index].FlowVector = FVector2D::ZeroVector;
                    continue;
                }
                
                // 获取8个邻居
                TArray<FVector2D> Neighbors = GetEightNeighbors(GridLocation);
                float MinDistance = FlowFieldGrid[Index].Distance;
                FVector2D BestDirection = FVector2D::ZeroVector;
                
                // 找到距离最小的邻居
                for (const FVector2D& Neighbor : Neighbors)
                {
                    if (IsGridIndexValid(Neighbor))
                    {
                        int32 NeighborIndex = GridToIndex(Neighbor);
                        
                        if (NeighborIndex >= 0 && NeighborIndex < FlowFieldGrid.Num())
                        {
                            if (FlowFieldGrid[NeighborIndex].Distance >= 0.0f && 
                                FlowFieldGrid[NeighborIndex].Distance < MinDistance)
                            {
                                MinDistance = FlowFieldGrid[NeighborIndex].Distance;
                                BestDirection = Neighbor - GridLocation;
                            }
                        }
                    }
                }
                
                // 计算单位向量
                if (BestDirection.SizeSquared() > 0.0f)
                {
                    FlowFieldGrid[Index].FlowVector = BestDirection.GetSafeNormal();
                }
                else
                {
                    FlowFieldGrid[Index].FlowVector = FVector2D::ZeroVector;
                }
            }
        }
    }
}

FVector2D AFlowField::GetFlowVectorAtLocation(const FVector& WorldLocation) const
{
    FVector2D GridLocation = WorldToGrid(WorldLocation);
    
    if (!IsGridIndexValid(GridLocation))
    {
        return FVector2D::ZeroVector;
    }
    
    int32 Index = GridToIndex(GridLocation);
    
    if (Index >= 0 && Index < FlowFieldGrid.Num())
    {
        // 如果是障碍物且启用了反向向量填充，返回反向向量
        if (FlowFieldGrid[Index].bIsObstacle && bEnableObstacleRepulsion)
        {
            return CalculateObstacleRepulsionVector(GridLocation);
        }
        
        return FlowFieldGrid[Index].FlowVector;
    }
    
    return FVector2D::ZeroVector;
}

bool AFlowField::IsLocationValid(const FVector& WorldLocation) const
{
    FVector2D GridLocation = WorldToGrid(WorldLocation);
    return IsGridIndexValid(GridLocation);
}

FVector2D AFlowField::WorldToGrid(const FVector& WorldLocation) const
{
    FVector LocalLocation = WorldLocation - FieldOrigin;
    return FVector2D(
        FMath::Floor(LocalLocation.X / CellSize),
        FMath::Floor(LocalLocation.Y / CellSize)
    );
}

FVector AFlowField::GridToWorld(const FVector2D& GridLocation) const
{
    return FieldOrigin + FVector(
        GridLocation.X * CellSize + CellSize * 0.5f,
        GridLocation.Y * CellSize + CellSize * 0.5f,
        0.0f
    );
}

int32 AFlowField::GridToIndex(const FVector2D& GridLocation) const
{
    return GridLocation.Y * GridWidth + GridLocation.X;
}

FVector2D AFlowField::IndexToGrid(int32 Index) const
{
    return FVector2D(Index % GridWidth, Index / GridWidth);
}

bool AFlowField::IsGridIndexValid(const FVector2D& GridLocation) const
{
    return GridLocation.X >= 0 && GridLocation.X < GridWidth &&
           GridLocation.Y >= 0 && GridLocation.Y < GridHeight;
}

TArray<FVector2D> AFlowField::GetNeighborDirections() const
{
    return {
        FVector2D(0, 1),   // 上
        FVector2D(1, 0),   // 右
        FVector2D(0, -1),  // 下
        FVector2D(-1, 0)   // 左
    };
}

TArray<FVector2D> AFlowField::GetEightNeighbors(const FVector2D& GridLocation) const
{
    TArray<FVector2D> Neighbors;
    
    for (int32 Y = -1; Y <= 1; ++Y)
    {
        for (int32 X = -1; X <= 1; ++X)
        {
            if (X == 0 && Y == 0) continue; // 跳过自己
            
            FVector2D Neighbor = GridLocation + FVector2D(X, Y);
            if (IsGridIndexValid(Neighbor))
            {
                Neighbors.Add(Neighbor);
            }
        }
    }
    
    return Neighbors;
}

void AFlowField::DrawDebugFlowField()
{
    if (!GetWorld()) return;
    
    // 清除之前的调试绘制
    FlushDebugStrings(GetWorld());
    FlushPersistentDebugLines(GetWorld());
    
    // 重置绘制标志
    bHasDrawn = true;
    
    // 绘制流场边界
    FVector TopLeft = FieldOrigin;
    FVector TopRight = FieldOrigin + FVector(GridWidth * CellSize, 0.0f, 0.0f);
    FVector BottomLeft = FieldOrigin + FVector(0.0f, GridHeight * CellSize, 0.0f);
    FVector BottomRight = FieldOrigin + FVector(GridWidth * CellSize, GridHeight * CellSize, 0.0f);
    
    DrawDebugLine(GetWorld(), TopLeft, TopRight, FColor::Yellow, false, 100.0f, 0, 3.0f);
    DrawDebugLine(GetWorld(), TopRight, BottomRight, FColor::Yellow, false, 100.0f, 0, 3.0f);
    DrawDebugLine(GetWorld(), BottomRight, BottomLeft, FColor::Yellow, false, 100.0f, 0, 3.0f);
    DrawDebugLine(GetWorld(), BottomLeft, TopLeft, FColor::Yellow, false, 100.0f, 0, 3.0f);
    
    // 绘制网格线
    for (int32 X = 1; X < GridWidth; ++X)
    {
        FVector StartPos = FieldOrigin + FVector(X * CellSize, 0.0f, 0.0f);
        FVector EndPos = FieldOrigin + FVector(X * CellSize, GridHeight * CellSize, 0.0f);
        DrawDebugLine(GetWorld(), StartPos, EndPos, FColor::White, false, 100.0f, 0, 1.0f);
    }
    
    for (int32 Y = 1; Y < GridHeight; ++Y)
    {
        FVector StartPos = FieldOrigin + FVector(0.0f, Y * CellSize, 0.0f);
        FVector EndPos = FieldOrigin + FVector(GridWidth * CellSize, Y * CellSize, 0.0f);
        DrawDebugLine(GetWorld(), StartPos, EndPos, FColor::White, false, 1000.0f, 0, 1.0f);
    }
    
    // 绘制流向向量箭头
    for (int32 Y = 0; Y < GridHeight; ++Y)
    {
        for (int32 X = 0; X < GridWidth; ++X)
        {
            FVector2D GridLocation(X, Y);
            int32 Index = GridToIndex(GridLocation);
            
            if (Index >= 0 && Index < FlowFieldGrid.Num())
            {
                FVector CellCenter = GridToWorld(GridLocation);
                FVector2D FlowVector = FlowFieldGrid[Index].FlowVector;
                
                // 只绘制有效的流向向量（非零向量）
                if (FlowVector.SizeSquared() > 0.1f)
                {
                    FVector StartPos = CellCenter;
                    FVector EndPos = CellCenter + FVector(FlowVector.X, FlowVector.Y, 0.0f) * CellSize * 0.3f;
                    
                    // 绘制箭头主体
                    DrawDebugLine(GetWorld(), StartPos, EndPos, FColor::Blue, false, 1000.0f, 0, 2.0f);
                    
                    // 绘制箭头头部
                    FVector Direction = (EndPos - StartPos).GetSafeNormal();
                    FVector Right = FVector::CrossProduct(Direction, FVector::UpVector).GetSafeNormal();
                    
                    FVector ArrowHead1 = EndPos - Direction * CellSize * 0.1f + Right * CellSize * 0.05f;
                    FVector ArrowHead2 = EndPos - Direction * CellSize * 0.1f - Right * CellSize * 0.05f;
                    
                    DrawDebugLine(GetWorld(), EndPos, ArrowHead1, FColor::Blue, false, 1000.0f, 0, 2.0f);
                    DrawDebugLine(GetWorld(), EndPos, ArrowHead2, FColor::Blue, false, 1000.0f, 0, 2.0f);
                }
                
                // 绘制障碍物（红色方块）
                if (FlowFieldGrid[Index].bIsObstacle)
                {
                    DrawDebugBox(GetWorld(), CellCenter, FVector(CellSize * 0.4f, CellSize * 0.4f, 5.0f), 
                               FQuat::Identity, FColor::Red, false, 1000.0f, 0, 1.0f);
                }
            }
        }
    }
    
    // 绘制障碍物反向向量
    if (bEnableObstacleRepulsion)
    {
        DrawObstacleRepulsionVectors();
    }
    
    UE_LOG(LogTemp, Log, TEXT("FlowField debug visualization drawn once"));
}

FVector2D AFlowField::CalculateObstacleRepulsionVector(const FVector2D& GridLocation) const
{
    if (!bEnableObstacleRepulsion)
    {
        return FVector2D::ZeroVector;
    }
    
    // 寻找最近的非障碍区域
    FVector2D NearestNonObstacleLocation = FindNearestNonObstacleLocation(GridLocation);
    
    if (NearestNonObstacleLocation.X >= 0 && NearestNonObstacleLocation.Y >= 0)
    {
        // 计算从障碍物到最近非障碍区域的方向
        FVector2D DirectionToNonObstacle = NearestNonObstacleLocation - GridLocation;
        
        if (DirectionToNonObstacle.SizeSquared() > 0.1f)
        {
            // 获取最近非障碍区域的流向向量
            int32 NonObstacleIndex = GridToIndex(NearestNonObstacleLocation);
            if (NonObstacleIndex >= 0 && NonObstacleIndex < FlowFieldGrid.Num())
            {
                FVector2D NonObstacleFlowVector = FlowFieldGrid[NonObstacleIndex].FlowVector;
                
                // 如果非障碍区域有有效的流向向量，计算垂直于该向量的方向
                if (NonObstacleFlowVector.SizeSquared() > 0.1f)
                {
                    // 计算垂直于流向向量的方向（逆时针旋转90度）
                    FVector2D PerpendicularDirection = FVector2D(-NonObstacleFlowVector.Y, NonObstacleFlowVector.X);
                    
                    // 确保垂直方向指向非障碍区域
                    float DotProduct = FVector2D::DotProduct(PerpendicularDirection, DirectionToNonObstacle);
                    if (DotProduct < 0)
                    {
                        PerpendicularDirection = -PerpendicularDirection;
                    }
                    
                    return PerpendicularDirection.GetSafeNormal() * ObstacleRepulsionStrength;
                }
                else
                {
                    // 如果非障碍区域没有流向向量，直接使用到非障碍区域的方向
                    return DirectionToNonObstacle.GetSafeNormal() * ObstacleRepulsionStrength;
                }
            }
        }
    }
    
    // 如果找不到非障碍区域，使用默认的8方向检测
    TArray<FVector2D> Directions = {
        FVector2D(0, 1), FVector2D(1, 1), FVector2D(1, 0), FVector2D(1, -1),
        FVector2D(0, -1), FVector2D(-1, -1), FVector2D(-1, 0), FVector2D(-1, 1)
    };
    
    // 找到最远离其他障碍物的方向
    FVector2D BestDirection = FVector2D::ZeroVector;
    float BestScore = -1.0f;
    
    for (const FVector2D& Direction : Directions)
    {
        FVector2D TestLocation = GridLocation + Direction;
        if (IsGridIndexValid(TestLocation))
        {
            int32 TestIndex = GridToIndex(TestLocation);
            if (TestIndex >= 0 && TestIndex < FlowFieldGrid.Num())
            {
                // 计算这个方向的得分（距离其他障碍物的平均距离）
                float Score = 0.0f;
                int32 ValidNeighbors = 0;
                
                TArray<FVector2D> Neighbors = GetEightNeighbors(TestLocation);
                for (const FVector2D& Neighbor : Neighbors)
                {
                    if (IsGridIndexValid(Neighbor))
                    {
                        int32 NeighborIndex = GridToIndex(Neighbor);
                        if (NeighborIndex >= 0 && NeighborIndex < FlowFieldGrid.Num())
                        {
                            if (!FlowFieldGrid[NeighborIndex].bIsObstacle)
                            {
                                Score += 1.0f;
                                ValidNeighbors++;
                            }
                        }
                    }
                }
                
                if (ValidNeighbors > 0)
                {
                    Score /= ValidNeighbors;
                    if (Score > BestScore)
                    {
                        BestScore = Score;
                        BestDirection = Direction;
                    }
                }
            }
        }
    }
    
    if (BestDirection.SizeSquared() > 0.0f)
    {
        return BestDirection.GetSafeNormal() * ObstacleRepulsionStrength;
    }
    
    return FVector2D::ZeroVector;
}

void AFlowField::DrawObstacleRepulsionVectors() const
{
    if (!GetWorld() || !bShowDebugStrings || !bEnableObstacleRepulsion)
    {
        return;
    }
    
    // 绘制障碍物反向向量
    for (int32 Y = 0; Y < GridHeight; ++Y)
    {
        for (int32 X = 0; X < GridWidth; ++X)
        {
            FVector2D GridLocation(X, Y);
            int32 Index = GridToIndex(GridLocation);
            
            if (Index >= 0 && Index < FlowFieldGrid.Num() && FlowFieldGrid[Index].bIsObstacle)
            {
                FVector CellCenter = GridToWorld(GridLocation);
                FVector2D RepulsionVector = CalculateObstacleRepulsionVector(GridLocation);
                
                if (RepulsionVector.SizeSquared() > 0.1f)
                {
                    FVector StartPos = CellCenter;
                    FVector EndPos = CellCenter + FVector(RepulsionVector.X, RepulsionVector.Y, 0.0f) * CellSize * 0.3f;
                    
                    // 绘制反向向量箭头（红色）
                    DrawDebugLine(GetWorld(), StartPos, EndPos, FColor::Red, false, 5.0f, 0, 4.0f);
                    
                    // 绘制箭头头部
                    FVector Direction = (EndPos - StartPos).GetSafeNormal();
                    FVector Right = FVector::CrossProduct(Direction, FVector::UpVector).GetSafeNormal();
                    
                    FVector ArrowHead1 = EndPos - Direction * CellSize * 0.1f + Right * CellSize * 0.05f;
                    FVector ArrowHead2 = EndPos - Direction * CellSize * 0.1f - Right * CellSize * 0.05f;
                    
                    DrawDebugLine(GetWorld(), EndPos, ArrowHead1, FColor::Red, false, 5.0f, 0, 4.0f);
                    DrawDebugLine(GetWorld(), EndPos, ArrowHead2, FColor::Red, false, 5.0f, 0, 4.0f);
                    
                    // 在箭头上方显示调试信息
                    if (bShowDebugStrings)
                    {
                        FString RepulsionText = FString::Printf(TEXT("反向向量: %.1f"), RepulsionVector.Size());
                        DrawDebugString(GetWorld(), CellCenter + FVector(0, 0, 50), RepulsionText, nullptr, FColor::Red, 0.0f, true);
                    }
                }
            }
        }
    }
}

FVector2D AFlowField::FindNearestNonObstacleLocation(const FVector2D& GridLocation) const
{
    // 使用广度优先搜索寻找最近的非障碍区域
    TArray<FVector2D> Queue;
    TSet<FVector2D> Visited;
    
    Queue.Add(GridLocation);
    Visited.Add(GridLocation);
    
    while (Queue.Num() > 0)
    {
        FVector2D CurrentLocation = Queue[0];
        Queue.RemoveAt(0);
        
        // 检查当前位置是否为非障碍区域
        if (IsGridIndexValid(CurrentLocation))
        {
            int32 Index = GridToIndex(CurrentLocation);
            if (Index >= 0 && Index < FlowFieldGrid.Num() && !FlowFieldGrid[Index].bIsObstacle)
            {
                return CurrentLocation;
            }
        }
        
        // 添加8个邻居到队列
        TArray<FVector2D> Neighbors = GetEightNeighbors(CurrentLocation);
        for (const FVector2D& Neighbor : Neighbors)
        {
            if (!Visited.Contains(Neighbor))
            {
                Queue.Add(Neighbor);
                Visited.Add(Neighbor);
            }
        }
    }
    
    // 如果找不到非障碍区域，返回无效位置
    return FVector2D(-1, -1);
} 