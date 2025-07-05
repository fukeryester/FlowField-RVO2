#FLOW FIELD PATHFINDING SYSTEM + RVO2 OBSTACLE AVOIDING SYSTEM

# 流场寻路系统 (Flow Field Pathfinding System)

这是一个基于流场算法的寻路系统，适用于UE5项目。系统包含两个主要组件：流场(FlowField)和寻路单位(FlowFieldAgent)。

## 系统特点

- **高效寻路**: 使用流场算法，支持大量单位同时寻路
- **动态更新**: 流场会根据目标位置动态更新
- **障碍物检测**: 自动检测场景中的静态障碍物
- **双线性插值**: 提供平滑的移动方向
- **调试可视化**: 完整的调试绘制功能

## 文件结构

```
Source/FlowFieldTest/
├── FlowField.h/cpp          # 流场类
├── FlowFieldAgent.h/cpp     # 寻路单位类
├── FlowFieldTestGameMode.h/cpp  # 测试GameMode
└── FlowFieldTest.cpp        # 模块文件
```

## 使用方法

### 1. 设置流场 (FlowField)

1. 在场景中拖入 `FlowField` Actor
2. 在流场的属性面板中设置：
   - **Cell Size**: 网格大小（默认100）
   - **Grid Width**: 网格宽度（默认50）
   - **Grid Height**: 网格高度（默认50）
   - **Target Actor**: 目标Actor
   - **Update Interval**: 更新间隔（默认1秒）
   - **Is Debugging**: 是否显示调试信息

3. 流场会自动：
   - 检测场景中的静态障碍物
   - 计算热力图（距离场）
   - 计算向量场
   - 定期更新流场

### 2. 创建寻路单位 (FlowFieldAgent)

1. 在场景中拖入 `FlowFieldAgent` Actor
2. 在单位的属性面板中设置：
   - **Movement Speed**: 移动速度（默认300）
   - **Agent Radius**: 单位半径（默认25）
   - **Update Direction Interval**: 方向更新间隔（默认0.5秒）
   - **Show Debug**: 是否显示调试信息
   - **Flow Field**: 引用流场Actor

3. 单位会自动：
   - 获取当前位置的流向向量
   - 使用双线性插值计算移动方向
   - 朝目标方向移动
   - 显示调试信息（红色圆形 + 黄色方向箭头）

### 3. 使用测试GameMode

1. 在项目设置中将 `FlowFieldTestGameMode` 设置为默认GameMode
2. 在GameMode的属性面板中设置：
   - **Agent Class**: 寻路单位类
   - **Agent Count**: 生成单位数量（默认100）
   - **Spawn Radius**: 生成半径（默认1000）
   - **Flow Field**: 引用流场Actor
   - **Target Actor**: 目标Actor

3. 在运行时调用：
   - `SpawnAgents()`: 生成单位
   - `ClearAllAgents()`: 清除所有单位

## 核心算法

### 热力图计算 (Heat Map)

1. 以目标位置为起点，距离值设为0
2. 使用广度优先搜索(BFS)遍历所有可达网格
3. 每个网格的距离值 = 父网格距离值 + 1

### 向量场计算 (Vector Field)

1. 遍历所有网格
2. 对每个网格，检查8个邻居
3. 选择距离值最小的邻居
4. 计算指向该邻居的单位向量

### 双线性插值 (Bilinear Interpolation)

1. 获取单位位置对应的四个角落网格
2. 计算插值权重
3. 使用双线性插值公式计算平滑的流向向量

## 调试功能

### 流场调试显示

- **绿色网格**: 可达区域
- **红色网格**: 障碍物区域
- **蓝色箭头**: 流向向量
- **白色数字**: 距离值

### 单位调试显示

- **红色圆形**: 单位位置和半径
- **黄色箭头**: 当前移动方向
- **橙色网格**: 单位占据的网格

## 性能优化建议

1. **网格大小**: 根据场景复杂度调整Cell Size
2. **更新频率**: 根据目标移动频率调整Update Interval
3. **单位数量**: 大量单位时考虑降低调试显示频率
4. **流场范围**: 根据实际需要调整网格大小

## 注意事项

1. 确保目标Actor在流场范围内
2. 流场更新是CPU密集型操作，避免过于频繁的更新
3. 调试显示会影响性能，发布版本请关闭
4. 单位半径不应超过网格大小的一半

## 扩展功能

系统设计为可扩展的，你可以：

1. 添加动态障碍物支持
2. 实现多目标流场
3. 添加单位间避让算法
4. 实现分层流场（不同高度）
5. 添加流场缓存机制

## 故障排除

### 单位不移动
- 检查FlowField引用是否正确
- 确认目标Actor在流场范围内
- 查看日志输出

### 流场不更新
- 检查TargetActor是否设置
- 确认UpdateInterval > 0
- 查看控制台日志

### 性能问题
- 降低网格密度
- 减少更新频率
- 关闭调试显示
- 减少单位数量 





# RVO2避障系统使用说明

## 概述
本项目为FlowFieldAgent添加了基于RVO2（Reciprocal Velocity Obstacles）的避障机制，使多个Agent能够智能地避免相互碰撞。同时优化了流场的障碍物检测功能。

## 主要功能

### 1. RVO2参数配置
在FlowFieldAgent中，你可以调整以下RVO2相关参数：

- **NeighborRadius**: 邻居检测半径（默认100.0f）
- **TimeHorizon**: 时间视野，用于预测碰撞（默认2.0f）
- **MaxSpeed**: 最大移动速度（默认400.0f）
- **bEnableRVO2**: 是否启用RVO2避障（默认true）
- **bShowRVO2Debug**: 是否显示RVO2调试信息（默认false）

### 2. 流场障碍物检测优化
在FlowField中，新增了以下障碍物检测参数：

- **ObstacleDetectionRadius**: 障碍物检测半径相对于网格大小的比例（默认0.8f）
- **bUseAggressiveObstacleDetection**: 使用激进的障碍物检测（默认true）
- **bEnableObstacleDetection**: 是否启用障碍物检测（默认true）
- **bEnableObstacleRepulsion**: 启用障碍物反向向量填充（默认true）
- **ObstacleRepulsionStrength**: 障碍物反向向量强度（默认200.0f）

#### 激进检测模式
当启用`bUseAggressiveObstacleDetection`时，系统会：
- 在每个网格中使用9个检测点（中心+8个方向）
- 使用较大的检测半径覆盖整个网格
- 只要任何一个检测点发现障碍物，就标记整个网格为障碍物
- 确保即使只有一点点障碍物填充也会被检测到

#### 障碍物反向向量填充
当启用`bEnableObstacleRepulsion`时，系统会：
- 为每个障碍物网格计算反向向量
- 反向向量垂直于最近非障碍区域的流向向量，并指向该非障碍区域
- 当Agent进入障碍物区域时，会获得反向推力帮助快速脱离
- 在调试模式下显示红色箭头表示反向向量
- 使用广度优先搜索寻找最近的非障碍区域

#### 标准检测模式
当关闭激进检测时，系统会：
- 使用单个大球体进行检测
- 检测半径由`ObstacleDetectionRadius`参数控制
- 适合性能要求较高的场景

### 3. 核心算法

#### 速度障碍物计算
- 为每个附近的Agent计算速度障碍物
- 基于相对位置、速度和半径计算碰撞风险
- 生成速度空间中的扇形障碍区域

#### 最佳速度选择
- 在速度空间中采样多个候选速度
- 选择最接近首选速度且不与任何障碍物冲突的速度
- 确保Agent能够平滑地避开障碍物

### 4. 调试功能

启用`bShowRVO2Debug`后，你可以看到：
- 黄色圆圈：邻居检测半径
- 绿色线条：当前速度向量
- 红色线条：速度障碍物边界
- 调试文本：显示邻居数量和当前速度

启用`bShowDebugStrings`后，你可以看到：
- 流场状态信息
- 障碍物检测统计
- 网格检测参数详情
- 障碍物反向向量（红色箭头）

## 使用方法

### 方法1：使用游戏模式自动测试
1. 在项目设置中将`FlowFieldTestGameMode`设置为默认游戏模式
2. 运行游戏，系统会自动生成50个Agent进行RVO2测试
3. 在游戏模式中可以调整Agent数量和生成参数

### 方法2：手动配置Agent
1. 在场景中放置FlowFieldAgent
2. 设置RVO2相关参数
3. 启用`bEnableRVO2`和`bShowRVO2Debug`
4. 运行游戏观察避障效果

### 方法3：配置流场障碍物检测
1. 在FlowField中设置`ObstacleDetectionRadius`（建议0.8-1.0）
2. 启用`bUseAggressiveObstacleDetection`以获得最佳检测效果
3. 调整`bEnableObstacleDetection`控制是否进行障碍物检测
4. 启用`bEnableObstacleRepulsion`以添加障碍物反向向量填充
5. 调整`ObstacleRepulsionStrength`控制反向向量的强度

### 方法4：蓝图调用
在蓝图中可以调用以下函数：
- `CalculateRVO2Velocity(PreferredVelocity)`: 计算RVO2避障后的速度
- `GetNearbyAgents()`: 获取附近的Agent列表
- `ComputeVelocityObstacle(OtherAgent)`: 计算与指定Agent的速度障碍物

## 性能优化建议

1. **调整邻居半径**: 根据场景大小调整`NeighborRadius`，避免检测过多Agent
2. **限制Agent数量**: 大量Agent会影响性能，建议控制在50个以内
3. **调整更新频率**: 通过`UpdateDirectionInterval`控制RVO2计算频率
4. **关闭调试**: 在发布版本中关闭`bShowRVO2Debug`以提高性能
5. **障碍物检测优化**: 
   - 对于简单场景，可以关闭激进检测模式
   - 调整`ObstacleDetectionRadius`平衡检测精度和性能
   - 在静态场景中可以关闭`bEnableObstacleDetection`

## 技术细节

### RVO2算法流程
1. 检测附近的Agent
2. 计算每个Agent的速度障碍物
3. 在速度空间中寻找最佳速度
4. 应用新速度进行移动

### 障碍物检测流程
1. 遍历所有网格
2. 根据检测模式选择检测策略
3. 使用碰撞检测判断是否有障碍物
4. 标记障碍物网格并更新流场

### 速度障碍物结构
```cpp
struct FVelocityObstacle
{
    FVector2D Apex;      // 障碍物顶点
    FVector2D LeftLeg;   // 左边界
    FVector2D RightLeg;  // 右边界
};
```

### 碰撞检测
使用叉积判断速度是否在速度障碍物内：
```cpp
float CrossLeft = FVector2D::CrossProduct(RelativeVelocity, Obstacle.LeftLeg);
float CrossRight = FVector2D::CrossProduct(RelativeVelocity, Obstacle.RightLeg);
bool InObstacle = CrossLeft >= 0.0f && CrossRight <= 0.0f;
```

## 故障排除

### 常见问题
1. **Agent不避障**: 检查`bEnableRVO2`是否启用
2. **性能问题**: 减少Agent数量或调整邻居半径
3. **调试信息不显示**: 确保`bShowRVO2Debug`已启用
4. **障碍物检测不准确**: 
   - 检查`bEnableObstacleDetection`是否启用
   - 调整`ObstacleDetectionRadius`参数
   - 启用`bUseAggressiveObstacleDetection`获得更精确的检测

### 调试技巧
1. 使用`bShowDebugStrings`查看基本移动信息
2. 使用`bShowRVO2Debug`查看RVO2详细信息
3. 在日志中查看RVO2计算过程
4. 观察障碍物检测统计信息

## 扩展功能

可以进一步扩展的功能：
1. 添加静态障碍物支持
2. 实现更复杂的速度采样策略
3. 添加群体行为模拟
4. 优化性能（使用空间分区等）
5. 支持动态障碍物检测
6. 添加障碍物类型分类 