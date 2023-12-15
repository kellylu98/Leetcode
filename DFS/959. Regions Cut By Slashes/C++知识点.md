在C++中，vector<vector<int>>& Grid 和 vector<vector<int>> Grid 表示两种不同的数据结构和用法。

vector<vector<int>>& Grid：

这是一个引用（Reference）类型。引用是C++中的一种机制，允许你使用一个已经存在的对象的别名。
当你修改 Grid 时，实际上是在修改传递给函数或代码块的原始数据结构，而不是创建新的副本。
通常用于函数参数，避免不必要的拷贝，提高性能。

```cpp
    void someFunction(vector<vector<int>>& Grid) {
        // 在函数中修改 Grid 会影响原始数据
        Grid[0][0] = 42;
    }
```

vector<vector<int>> Grid：

这是一个普通的vector对象，不是引用。当你对 Grid 进行修改时，不会影响原始数据结构，而是创建了一个新的副本。
这是传统的值传递，每次传递都会涉及复制整个数据结构，可能导致性能开销。

```cpp
    void someFunction(vector<vector<int>> Grid) {
        // 在函数中修改 Grid 不会影响原始数据，因为是副本
        Grid[0][0] = 42;
    }
```

在使用时，你可以根据具体的需求选择使用引用或传值。使用引用可以避免不必要的复制，提高性能，但需要注意引用的生命周期，确保引用指向有效的对象。使用传值则更安全，每个函数调用都有自己的拷贝，互不影响，但可能会引入性能开销。
