/**
 * @file 110.平衡二叉树.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 给定一个二叉树，判断它是否是高度平衡的二叉树。
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
    bool is_Balanced = true;
    bool isBalanced(TreeNode* root) {
        measure(root);
        return is_Balanced;
    }
    int measure(TreeNode* root) {               //后序遍历寻找最大深度
        if (!root) return 0;
        int leftmax = measure(root->left);      //左节点最大深度
        int rightmax = measure(root->right);    //右节点最大深度
        if (abs(leftmax - rightmax) > 1) is_Balanced = false;
        return 1+max(leftmax,rightmax);
    }
};