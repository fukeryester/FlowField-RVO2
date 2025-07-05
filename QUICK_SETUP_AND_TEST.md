# 快速安装以及测试设置指南

## 快速安装
将Source中的代码拷贝到自己的项目的Source文件夹中，将类的API调整为你的项目的API即可。

## 问题修复说明

已修复以下问题：
1. **调试绘制优化**：现在只在开始时绘制一次，而不是每帧绘制
2. **单位生成逻辑**：改进了生成位置的计算，使用流场的实际范围
3. **内存使用优化**：减少了不必要的调试绘制调用
4. **流场调试优化**：添加了网格数量限制和详细调试选项
5. **单位显示优化**：使用StaticMesh替代调试绘制

## 快速测试步骤
### 1. 创建简单测试场景
1. 创建新的空白关卡
2. 保存为 `FlowFieldTest`

### 2. 添加流场
1. 在内容浏览器中找到 `FlowField` 类
2. 拖入场景中央 (0,0,0)
3. 设置属性：
   - **Cell Size**: 100
   - **Grid Width**: 20
   - **Grid Height**: 20
   - **Update Interval**: 2.0
   - **Is Debugging**: true
   - **Draw Detailed Debug**: false (推荐)

### 3. 添加目标
1. 添加一个简单的Static Mesh Actor
2. 放置在流场范围内，比如 (500, 500, 0)
3. 在流场属性中设置 **Target Actor** 为这个Actor

### 4. 设置GameMode
1. 项目设置 → Maps & Modes
2. 设置 **Default GameMode** 为 `FlowFieldTestGameMode`
3. 或者在关卡设置中设置当前关卡的GameMode

### 5. 添加障碍物（可选）
1. 在场景中添加一些Static Mesh作为障碍物
2. 确保它们有WorldDynamic碰撞通道
3. 流场会自动检测这些障碍物

### 6. 运行测试
1. 点击播放
2. 系统会自动生成单位并开始寻路

## 预期结果

- 黄色边框显示流场边界
- 红色方块显示障碍物（如果有，仅在详细调试模式下）
- 红色球体显示寻路单位（使用StaticMesh）
- 单位会自动向目标移动

## 调试选项说明

### 流场调试模式
- **Is Debugging**: 启用/禁用所有调试绘制
- **Draw Detailed Debug**: 
  - `false` (推荐): 只绘制流场边界，性能最好
  - `true`: 绘制详细内容（障碍物、流向向量等）

### 性能优化
- 网格数量 > 1000时自动切换到简单模式
- 障碍物绘制限制为最多50个
- 调试绘制只执行一次，不会重复

## 调试信息

查看输出日志可以看到：
- 流场信息（位置、大小、网格大小）
- 单位生成状态
- 调试绘制确认
- 网格大小警告（如果过大）

## 如果仍有问题

1. **单位不生成**：检查流场是否有有效的流向向量
2. **性能问题**：减少单位数量或关闭调试显示
3. **内存问题**：确保调试绘制只执行一次
4. **网格过大**：减少Grid Width/Height或增加Cell Size
5. **障碍物检测问题**：确保障碍物使用WorldDynamic碰撞通道，而不是WorldStatic

## 性能建议

- 单位数量：10-20个
- 网格大小：50-100
- 网格数量：20x20或更小
- 调试显示：仅在测试时开启
- 详细调试：仅在需要时开启

## 推荐设置

### 测试用（小场景）
- Cell Size: 100
- Grid Width: 20
- Grid Height: 20
- Is Debugging: true
- Draw Detailed Debug: false

### 生产用（大场景）
- Cell Size: 200
- Grid Width: 50
- Grid Height: 50
- Is Debugging: false
- Draw Detailed Debug: false 