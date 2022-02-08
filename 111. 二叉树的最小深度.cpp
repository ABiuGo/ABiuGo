/**
 * @file 111. 二叉树的最小深度.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 给定一个二叉树，找出其最小深度。
 * 最小深度是从根节点到最近叶子节点的最短路径上的节点数量。
 * @version 0.1
 * @date 2022-02-08
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
    int mindep = 0;
    int minDepth(TreeNode* root) {
        if (!root) return 0;
        int L_d = minDepth(root->left),R_d = minDepth(root->right);
        return L_d && R_d? 1+min(L_d, R_d) : (L_d? 1+L_d: 1+R_d); //左右节点都存在，取最小深度，只存在一个，则直接取存在的
    }
   
};