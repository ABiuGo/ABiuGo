/* ************************************************************************
> File Name:     144.二叉树的前序遍历.cpp
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  四  2/10 21:56:37 2022
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
    vector<int> ans;
    vector<int> preorderTraversal(TreeNode* root) {
        PT(root);
        return ans;
    }
    void PT(TreeNode* root) {
        if (!root) return;
        ans.push_back(root->val);
        PT(root->left);
        PT(root->right);
    }
};
