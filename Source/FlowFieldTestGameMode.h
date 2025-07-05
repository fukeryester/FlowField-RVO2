#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FlowFieldTestGameMode.generated.h"

UCLASS()
class FLOWFIELDTEST_API AFlowFieldTestGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    AFlowFieldTestGameMode();

protected:
    virtual void BeginPlay() override;

public:
    // 测试RVO2的参数
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RVO2 Test")
    int32 NumAgents = 50; // 默认生成50个Agent

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RVO2 Test")
    float SpawnRadius = 500.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RVO2 Test")
    TSubclassOf<class AFlowFieldAgent> AgentClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RVO2 Test")
    bool bSpawnAgentsOnBeginPlay = true;

    // 测试函数
    UFUNCTION(BlueprintCallable, Category = "RVO2 Test")
    void SpawnTestAgents();

    UFUNCTION(BlueprintCallable, Category = "RVO2 Test")
    void ToggleRVO2ForAllAgents();

private:
    TArray<class AFlowFieldAgent*> SpawnedAgents;
}; 