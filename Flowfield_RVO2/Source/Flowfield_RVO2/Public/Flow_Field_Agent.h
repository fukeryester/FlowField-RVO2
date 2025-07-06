#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "Components/StaticMeshComponent.h"
#include "Flow_Field.h"
#include "Flow_Field_Agent.generated.h"

// RVO2相关的结构体
USTRUCT(BlueprintType)
struct FVelocityObstacle
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "RVO2")
    FVector2D Apex;

    UPROPERTY(BlueprintReadWrite, Category = "RVO2")
    FVector2D LeftLeg;

    UPROPERTY(BlueprintReadWrite, Category = "RVO2")
    FVector2D RightLeg;

    FVelocityObstacle()
        : Apex(FVector2D::ZeroVector)
        , LeftLeg(FVector2D::ZeroVector)
        , RightLeg(FVector2D::ZeroVector)
    {
    }

    FVelocityObstacle(const FVector2D& InApex, const FVector2D& InLeftLeg, const FVector2D& InRightLeg)
        : Apex(InApex)
        , LeftLeg(InLeftLeg)
        , RightLeg(InRightLeg)
    {
    }
};

UCLASS(BlueprintType, Blueprintable)
class FLOWFIELD_RVO2_API AFlow_Field_Agent : public AActor
{
    GENERATED_BODY()

public:
    AFlow_Field_Agent();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

public:
    // 单位配置参数
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Agent Settings")
    float MovementSpeed = 300.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Agent Settings")
    float AgentRadius = 25.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Agent Settings")
    float UpdateDirectionInterval = 0.5f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Agent Settings")
    bool bShowDebugStrings = false;

    // RVO2避障参数
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RVO2 Settings")
    float NeighborRadius = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RVO2 Settings")
    float TimeHorizon = 2.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RVO2 Settings")
    float MaxSpeed = 400.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RVO2 Settings")
    bool bEnableRVO2 = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RVO2 Settings")
    bool bShowRVO2Debug = false;

    // 流场引用
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Agent Settings")
    AFlow_Field* FlowField = nullptr;

    // 静态网格组件
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* MeshComponent;

    // 公共接口
    UFUNCTION(BlueprintCallable, Category = "FlowField Agent")
    void SetFlowField(AFlow_Field* NewFlowField);

    UFUNCTION(BlueprintCallable, Category = "FlowField Agent")
    void UpdateMovementDirection();

    UFUNCTION(BlueprintCallable, Category = "FlowField Agent")
    FVector2D GetBilinearInterpolatedFlowVector(const FVector& WorldLocation) const;

    UFUNCTION(BlueprintCallable, Category = "FlowField Agent")
    TArray<FVector2D> GetOccupiedGridCells(const FVector& WorldLocation) const;

    UFUNCTION(BlueprintCallable, Category = "FlowField Agent")
    void UpdateMeshScale();

    // RVO2避障接口
    UFUNCTION(BlueprintCallable, Category = "RVO2")
    FVector2D CalculateRVO2Velocity(const FVector2D& PreferredVelocity);

    UFUNCTION(BlueprintCallable, Category = "RVO2")
    TArray<AFlow_Field_Agent*> GetNearbyAgents() const;

    UFUNCTION(BlueprintCallable, Category = "RVO2")
    FVelocityObstacle ComputeVelocityObstacle(const AFlow_Field_Agent* OtherAgent) const;

    UFUNCTION(BlueprintCallable, Category = "RVO2")
    bool IsVelocityInObstacle(const FVector2D& Velocity, const FVelocityObstacle& Obstacle) const;

    UFUNCTION(BlueprintCallable, Category = "RVO2")
    FVector2D FindBestVelocity(const FVector2D& PreferredVelocity, const TArray<FVelocityObstacle>& Obstacles) const;

private:
    // 私有成员变量
    FTimerHandle DirectionUpdateTimerHandle;
    FVector2D CurrentMovementDirection;
    FVector2D TargetMovementDirection;
    FVector2D CurrentVelocity;

    // 私有方法
    void OnDirectionUpdateTimer();
    FVector2D BilinearInterpolate(const TArray<FVector2D>& CornerVectors, const FVector2D& Weights) const;
    
    // RVO2私有方法
    FVector2D ComputeNewVelocity(const FVector2D& PreferredVelocity);
    void DrawRVO2DebugInfo();
}; 