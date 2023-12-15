在C++中，vector<vector<int>>& Grid 和 vector<vector<int>> Grid 表示两种不同的数据结构和用法。

vector<vector<int>>& Grid：

这是一个引用（Reference）类型。引用是C++中的一种机制，允许你使用一个已经存在的对象的别名。
当你修改 Grid 时，实际上是在修改传递给函数或代码块的原始数据结构，而不是创建新的副本。
通常用于函数参数，避免不必要的拷贝，提高性能。

''' cpp
    void someFunction(vector<vector<int>>& Grid) {
        // 在函数中修改 Grid 会影响原始数据
        Grid[0][0] = 42;
    }
'''
