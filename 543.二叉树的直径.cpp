/* ************************************************************************
> File Name:     543.二叉树的直径.cpp
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  四  2/10 21:42:21 2022
> Description:   
 ************************************************************************/
//给定一棵二叉树，你需要计算他的直径长度，一棵二叉树的直径长度是任意两个节点路径长度中的最大值，这条路径也可能不穿过根节点。

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
    int left = 0, right = 0;
    int ans = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        int x = depth(root);
        return ans;
    }
    int depth(TreeNode* root) {
        if (!root) return 0;
        int left_d = depth(root->left);//后续遍历，左子树的最大深度
        int right_d = depth(root->right);
        ans = max(ans, left_d+right_d);
        return 1+max(left_d,right_d);
    }
};
