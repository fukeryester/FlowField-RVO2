#include "FlowField_RVO2_Gamemode.h"
#include "Flow_Field_Agent.h"
#include "Flow_Field.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"

AFlow_Field_GameMode::AFlow_Field_GameMode()
{
    // 设置默认值
    NumAgents = 300;
    SpawnRadius = 500.0f;
    bSpawnAgentsOnBeginPlay = true;
}

void AFlow_Field_GameMode::BeginPlay()
{
    Super::BeginPlay();
    
    if (bSpawnAgentsOnBeginPlay)
    {
        SpawnTestAgents();
    }
}

void AFlow_Field_GameMode::SpawnTestAgents()
{
    if (!GetWorld())
    {
        UE_LOG(LogTemp, Warning, TEXT("无法生成Agent：World无效"));
        return;
    }
    
    // 清除现有的Agent
    for (AFlow_Field_Agent* Agent : SpawnedAgents)
    {
        if (Agent)
        {
            Agent->Destroy();
        }
    }
    SpawnedAgents.Empty();
    
    // 查找流场
    TArray<AActor*> FoundFlowFields;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFlow_Field::StaticClass(), FoundFlowFields);
    AFlow_Field* FlowField = nullptr;
    if (FoundFlowFields.Num() > 0)
    {
        FlowField = Cast<AFlow_Field>(FoundFlowFields[0]);
    }
    
    // 确定要使用的Agent类
    TSubclassOf<AFlow_Field_Agent> AgentClassToUse = AgentClass;
    if (FlowField && FlowField->FlowFieldAgentClass)
    {
        // 如果流场中设置了Agent类，优先使用流场的设置
        AgentClassToUse = FlowField->FlowFieldAgentClass;
        UE_LOG(LogTemp, Log, TEXT("使用流场中设置的Agent类"));
    }
    else if (!AgentClassToUse)
    {
        // 如果都没有设置，使用默认的C++类
        AgentClassToUse = AFlow_Field_Agent::StaticClass();
        UE_LOG(LogTemp, Log, TEXT("使用默认的C++ Agent类"));
    }
    
    if (!AgentClassToUse)
    {
        UE_LOG(LogTemp, Warning, TEXT("无法生成Agent：AgentClass无效"));
        return;
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
        
        AFlow_Field_Agent* NewAgent = GetWorld()->SpawnActor<AFlow_Field_Agent>(AgentClassToUse, SpawnLocation, FRotator::ZeroRotator, SpawnParams);
        
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

void AFlow_Field_GameMode::ToggleRVO2ForAllAgents()
{
    for (AFlow_Field_Agent* Agent : SpawnedAgents)
    {
        if (Agent)
        {
            Agent->bEnableRVO2 = !Agent->bEnableRVO2;
            UE_LOG(LogTemp, Log, TEXT("Agent RVO2: %s"), Agent->bEnableRVO2 ? TEXT("启用") : TEXT("禁用"));
        }
    }
} 