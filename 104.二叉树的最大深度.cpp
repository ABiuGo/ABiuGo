/**
 * @file 104.二叉树的最大深度.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 给定一个二叉树，找出其最大深度。
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */



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
    int ans = 0;
    int maxDepth(TreeNode* root) {
        if (!root) return 0;
        if (!root->left && !root->right) return 1;
        return 1+max(maxDepth(root->left),maxDepth(root->right));
    }

};