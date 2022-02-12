/* ************************************************************************
> File Name:     235.二叉搜索树的最近公共祖先.cpp
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  六  2/12 21:30:38 2022
> Description:   
 ************************************************************************/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root) return NULL;
        if (p->val > q->val)    return lowestCommonAncestor(root, q, p);
        if (root->val > q->val) return lowestCommonAncestor(root->left, p, q);
        else if (root->val < p->val)    return lowestCommonAncestor(root->right, p, q);
        return root;
    }
};
