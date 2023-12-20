#### 501. Find Mode in Binary Search Tree

本题使用**中序遍历**，关键点在于如何判断哪些元素应该放入答案中。

首先判断该数是不是第一个数(```cpp maxFreq == 0``` -> 说明该数是第一个数)
