/* ************************************************************************
> File Name:     114.二叉树展开为链表.cpp
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  五  2/11 10:49:32 2022
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

//后续遍历，将左节点接到右节点，右节点接到最下面。
class Solution {
public:
    void flatten(TreeNode* root) {
        if (!root) return;
        flatten(root->left);
        flatten(root->right);
        TreeNode* L = root->left;
        TreeNode* R = root->right;
        root->left = NULL;
        root->right = L;
        TreeNode* temp = root;
        while (temp->right) {
            temp = temp->right;
        }
        temp->right = R;
    }
};
