#### 501. Find Mode in Binary Search Tree

本题使用**中序遍历**，关键点在于如何判断哪些元素应该放入答案中。

首先判断该数是不是第一个数(``` maxFreq == 0``` -> 说明该数是第一个数)，之后```curFreq = 1; maxFreq = 1; result = {root->val}```

如果不是第一个数，则判断当前元素值是否和上一个元素值是否相同

若``` root->val == value```，说明当前元素值是否与上一个元素值相同，```curFreq++;```。之后判断curFreq与maxFreq之间的大小关系，如果```curFreq > maxFreq```,则``` maxFreq = curFreq; result = {root->val}```;如果```curFreq == maxFreq```,则``` result.push_back(root->val)```;

若``` root->val != value```，说明当前元素值是否与上一个元素值不相同，```curFreq = 1; value = root->val;```;**最重要的一点：当且仅当```curFreq == maxFreq```时，``` result.push_back(root->val)```;**
