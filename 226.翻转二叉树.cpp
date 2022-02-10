/* ************************************************************************
> File Name:     226.翻转二叉树.cpp
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  四  2/10 22:02:26 2022
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
    TreeNode* invertTree(TreeNode* root) {
        reverse(root);
        return root;
    }
    void reverse(TreeNode* root) {
        if (!root || !root->left && !root->right) return;
        reverse(root->left);
        reverse(root->right);//后续遍历，从底向上翻转。
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
};
