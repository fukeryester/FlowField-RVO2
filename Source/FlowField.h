#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "FlowField.generated.h"

class AFlowFieldAgent;

USTRUCT(BlueprintType)
struct FFlowFieldCell
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Distance = -1.0f; // -1表示未访问

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsObstacle = false;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D FlowVector = FVector2D::ZeroVector;

    FFlowFieldCell()
    {
        Distance = -1.0f;
        bIsObstacle = false;
        FlowVector = FVector2D::ZeroVector;
    }
};

UCLASS(BlueprintType, Blueprintable)
class FLOWFIELDTEST_API AFlowField : public AActor
{
    GENERATED_BODY()

public:
    AFlowField();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

public:
    // 流场配置参数
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FlowField Settings")
    float CellSize = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FlowField Settings")
    int32 GridWidth = 50;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FlowField Settings")
    int32 GridHeight = 50;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FlowField Settings")
    AActor* TargetActor = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FlowField Settings")
    float UpdateInterval = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FlowField Settings")
    bool bIsDebugging = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FlowField Settings")
    bool bShowDebugStrings = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FlowField Settings")
    bool bEnableObstacleDetection = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FlowField Settings")
    float ObstacleDetectionRadius = 0.8f; // 障碍物检测半径相对于网格大小的比例

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FlowField Settings")
    bool bUseAggressiveObstacleDetection = true; // 使用激进的障碍物检测，即使只有一点点障碍也标记为障碍物

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FlowField Settings")
    bool bEnableObstacleRepulsion = true; // 启用障碍物反向向量填充

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FlowField Settings")
    float ObstacleRepulsionStrength = 200.0f; // 障碍物反向向量强度

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FlowField Settings")
    TSubclassOf<AFlowFieldAgent> FlowFieldAgentClass;

    // 流场数据
    UPROPERTY(BlueprintReadOnly, Category = "FlowField Data")
    TArray<FFlowFieldCell> FlowFieldGrid;

    // 公共接口
    UFUNCTION(BlueprintCallable, Category = "FlowField")
    void InitializeFlowField();

    UFUNCTION(BlueprintCallable, Category = "FlowField")
    void UpdateFlowField();

    UFUNCTION(BlueprintCallable, Category = "FlowField")
    FVector2D GetFlowVectorAtLocation(const FVector& WorldLocation) const;

    UFUNCTION(BlueprintCallable, Category = "FlowField")
    bool IsLocationValid(const FVector& WorldLocation) const;

    UFUNCTION(BlueprintCallable, Category = "FlowField")
    FVector2D WorldToGrid(const FVector& WorldLocation) const;

    UFUNCTION(BlueprintCallable, Category = "FlowField")
    FVector GridToWorld(const FVector2D& GridLocation) const;

    UFUNCTION(BlueprintCallable, Category = "FlowField")
    int32 GridToIndex(const FVector2D& GridLocation) const;

    UFUNCTION(BlueprintCallable, Category = "FlowField")
    FVector2D IndexToGrid(int32 Index) const;

    UFUNCTION(BlueprintCallable, Category = "FlowField")
    bool IsGridIndexValid(const FVector2D& GridLocation) const;

    UFUNCTION(BlueprintCallable, Category = "FlowField")
    FVector2D CalculateObstacleRepulsionVector(const FVector2D& GridLocation) const;

    UFUNCTION(BlueprintCallable, Category = "FlowField")
    void DrawObstacleRepulsionVectors() const;

    UFUNCTION(BlueprintCallable, Category = "FlowField")
    FVector2D FindNearestNonObstacleLocation(const FVector2D& GridLocation) const;

private:
    // 私有成员变量
    FTimerHandle UpdateTimerHandle;
    FTimerHandle DebugDrawTimerHandle;
    FVector FieldOrigin;
    bool bHasDrawn = false;

    // 私有方法
    void DetectObstacles();
    void CalculateHeatMap();
    void CalculateVectorField();
    void DrawDebugFlowField();
    
    // 辅助方法
    TArray<FVector2D> GetNeighborDirections() const;
    TArray<FVector2D> GetEightNeighbors(const FVector2D& GridLocation) const;
}; 