/* ************************************************************************
> File Name:     129.球根节点到叶节点数字之和.cpp
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  四  2/10 16:56:45 2022
> Description:   
 ************************************************************************/
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
    int sumNumbers(TreeNode* root) {
        return helper(root,0);
    }
    int helper(TreeNode* root, int sum) {
        if (!root) return 0;
        if (!root->left && !root->right) return 10*sum+root->val;
        return helper(root->left,10*sum+root->val) + helper(root->right, 10*sum + root->val);
    }
};