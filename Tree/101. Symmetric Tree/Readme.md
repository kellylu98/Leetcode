### 101. Symmetric Tree

Base case: ```if(left == NULL || right == NULL) return left == right; ```
左子树和右子树的root同时为空/只有一个为空/都不为空的情况

此题的关键就是如何判断左子树和右子树是否对称。那么，判断的条件基于以下：
  1. 左子树、右子树的root的值是否一致
  2. 左子树的root的左孩子是否与右子树的root的右孩子一致 (outside)
  3. 左子树的root的右孩子是否与右子树的root的左孩子一致 (inside)

```cpp
        if(left->val != right->val) return false;
        bool outside = isSymmetricTree(left->left, right->right);
        bool inside = isSymmetricTree(left->right, right->left);
        bool result = outside && inside;
        return result;
```


[Leetcode Link](https://leetcode.com/problems/symmetric-tree/)
