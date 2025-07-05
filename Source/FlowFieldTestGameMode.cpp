#include "FlowFieldTestGameMode.h"
#include "FlowFieldAgent.h"
#include "FlowField.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"

AFlowFieldTestGameMode::AFlowFieldTestGameMode()
{
    // 设置默认值
    NumAgents = 50;
    SpawnRadius = 500.0f;
    bSpawnAgentsOnBeginPlay = true;
    
    // 设置默认Agent类
    static ConstructorHelpers::FClassFinder<AFlowFieldAgent> AgentClassFinder(TEXT("/Game/BP_FlowFieldAgent"));
    if (AgentClassFinder.Succeeded())
    {
        AgentClass = AgentClassFinder.Class;
    }
}

void AFlowFieldTestGameMode::BeginPlay()
{
    Super::BeginPlay();
    
    if (bSpawnAgentsOnBeginPlay)
    {
        SpawnTestAgents();
    }
}

void AFlowFieldTestGameMode::SpawnTestAgents()
{
    if (!GetWorld() || !AgentClass)
    {
        UE_LOG(LogTemp, Warning, TEXT("无法生成Agent：World或AgentClass无效"));
        return;
    }
    
    // 清除现有的Agent
    for (AFlowFieldAgent* Agent : SpawnedAgents)
    {
        if (Agent)
        {
            Agent->Destroy();
        }
    }
    SpawnedAgents.Empty();
    
    // 查找流场
    TArray<AActor*> FoundFlowFields;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFlowField::StaticClass(), FoundFlowFields);
    AFlowField* FlowField = nullptr;
    if (FoundFlowFields.Num() > 0)
    {
        FlowField = Cast<AFlowField>(FoundFlowFields[0]);
    }
    
    // 生成Agent
    for (int32 i = 0; i < NumAgents; ++i)
    {
        // 在圆形区域内随机生成位置
        float Angle = FMath::RandRange(0.0f, 2.0f * PI);
        float Distance = FMath::RandRange(0.0f, SpawnRadius);
        FVector SpawnLocation = FVector(
            FMath::Cos(Angle) * Distance,
            FMath::Sin(Angle) * Distance,
            50.0f // 稍微抬高一点
        );
        
        // 生成Agent
        FActorSpawnParameters SpawnParams;
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
        
        AFlowFieldAgent* NewAgent = GetWorld()->SpawnActor<AFlowFieldAgent>(AgentClass, SpawnLocation, FRotator::ZeroRotator, SpawnParams);
        
        if (NewAgent)
        {
            // 设置Agent参数
            NewAgent->SetFlowField(FlowField);
            NewAgent->bEnableRVO2 = true;
            NewAgent->bShowRVO2Debug = false;
            NewAgent->NeighborRadius = 150.0f;
            NewAgent->TimeHorizon = 2.0f;
            NewAgent->MaxSpeed = 400.0f;
            // 根据流场设置Agent的debug显示
            if (FlowField)
            {
                NewAgent->bShowDebugStrings = FlowField->bShowDebugStrings;
                NewAgent->bShowRVO2Debug = true;
            }
            SpawnedAgents.Add(NewAgent);
            
            UE_LOG(LogTemp, Log, TEXT("生成Agent %d 在位置 %s"), i, *SpawnLocation.ToString());
        }
    }
    
    UE_LOG(LogTemp, Log, TEXT("成功生成 %d 个Agent进行RVO2测试"), SpawnedAgents.Num());
}

void AFlowFieldTestGameMode::ToggleRVO2ForAllAgents()
{
    for (AFlowFieldAgent* Agent : SpawnedAgents)
    {
        if (Agent)
        {
            Agent->bEnableRVO2 = !Agent->bEnableRVO2;
            UE_LOG(LogTemp, Log, TEXT("Agent RVO2: %s"), Agent->bEnableRVO2 ? TEXT("启用") : TEXT("禁用"));
        }
    }
} 