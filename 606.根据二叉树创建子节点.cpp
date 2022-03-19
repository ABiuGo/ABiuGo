/**
 * @file 606.根据二叉树创建子节点.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief https://leetcode-cn.com/problems/construct-string-from-binary-tree/
 * @version 0.1
 * @date 2022-03-19
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
    string ans;
    string tree2str(TreeNode* root) {
        help(root);
        return ans.substr(1,ans.size()-2);
        //特殊判断根节点，不用最后处理
        // if (!root) return "()";
        // ans += to_string(root->val);
        // if (!root->left && root->right) 
        //     ans += "()";
        // else 
        //     help(root->left);
        // 
        // help(root->right);
        // return ans;
    }
    void help(TreeNode* root) {
        if (!root) return;
        if (!root->left && !root->right) {
            ans += "(" + to_string(root->val) + ")";
            return;
        }
        ans += "(";
        ans += to_string(root->val);
        if (!root->left)    
            ans += "()";
        else    
            help(root->left);
        help(root->right);
        ans += ")";
        return;
    }

};