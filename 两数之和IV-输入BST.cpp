/**
 * @file 两数之和IV-输入BST.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */



class Solution {
public:
    unordered_set<int> map;
    bool is_exist = false;
    bool findTarget(TreeNode* root, int k) {
        mid(root, k);
        return is_exist;
    }
    void mid(TreeNode* root, int k) {
        if (!root) return;
        mid(root->left, k);
        if (map.count(k - root->val)) {
            is_exist = true;
            return;
        }
        map.emplace(root->val);
        mid(root->right, k);
    }
};