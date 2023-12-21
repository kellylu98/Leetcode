### 79. Word Search(经典DFS）

**base case里必须要有一个判断正确的条件**，本题就是当```idxOfWord >= word.size()```时，返回true，这样才能确定DFS(...)的结果为true还是false

本题的核心是**回溯**，我们需要在网格中探索所有可能的路径，找到是否存在一条路径，使得路径上的字符连接起来构成给定的单词。回溯的核心思想是通过尝试所有可能的选择，并在发现当前选择无效时进行回退。

[Leetcode Link](https://leetcode.com/problems/word-search/)
