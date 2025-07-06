#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FlowField_RVO2_Gamemode.generated.h"

UCLASS()
class FLOWFIELD_RVO2_API AFlow_Field_GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AFlow_Field_GameMode();

protected:
	virtual void BeginPlay() override;

public:
	// 测试RVO2的参数
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RVO2 Test")
	int32 NumAgents = 300; // 默认生成50个Agent

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RVO2 Test")
	float SpawnRadius = 500.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RVO2 Test")
	TSubclassOf<class AFlow_Field_Agent> AgentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RVO2 Test")
	bool bSpawnAgentsOnBeginPlay = true;

	// 测试函数
	UFUNCTION(BlueprintCallable, Category = "RVO2 Test")
	void SpawnTestAgents();

	UFUNCTION(BlueprintCallable, Category = "RVO2 Test")
	void ToggleRVO2ForAllAgents();

private:
	UPROPERTY()
	TArray<class AFlow_Field_Agent*> SpawnedAgents;
}; 