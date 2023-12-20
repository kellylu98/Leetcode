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
    int maxFreq = 0;
    int curFreq = 0;
    int value = 0;
    vector<int> result;

public:
    vector<int> findMode(TreeNode* root) {
        DFS(root);
        return result;
    }

    void DFS(TreeNode* root){
        //base case
        if(root == NULL) return;

        DFS(root->left);

        if(maxFreq == 0){
            curFreq = 1;
            maxFreq = 1;
            value = root->val;
            result = {root->val};
        }
        else{
            if(root->val == value){
                curFreq++;
                if(curFreq > maxFreq){
                    maxFreq = curFreq;
                    result = {root->val};
                }
                else if(curFreq == maxFreq){
                    result.push_back(root->val);
                }
            }
            else{
                curFreq = 1;
                value = root->val;
                if(curFreq == maxFreq) result.push_back(root->val);
            }
        }

        DFS(root->right);
    }
};
