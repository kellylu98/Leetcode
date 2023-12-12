/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return isSymmetricTree(root->left, root->right);
    }

    bool isSymmetricTree(TreeNode* left, TreeNode* right){
        // base case
        if(left == NULL || right == NULL) return left == right;
        if(left->val != right->val) return false;
        bool outside = isSymmetricTree(left->left, right->right);
        bool inside = isSymmetricTree(left->right, right->left);
        bool result = outside && inside;
        return result;
    }
};
