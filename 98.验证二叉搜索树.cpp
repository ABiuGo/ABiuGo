/**
 * @file 98.验证二叉搜索树.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 给你一个二叉树的根节点 root ，判断其是否是一个有效的二叉搜索树。
 * 有效 二叉搜索树定义如下：
 * 节点的左子树只包含 小于 当前节点的数。
 * 节点的右子树只包含 大于 当前节点的数。
 * 所有左子树和右子树自身必须也是二叉搜索树。
 * @version 0.1
 * @date 2022-01-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */
//中序遍历顺序：左根右，所以判断根>左，右子树最小>根。

class Solution {
public:
    int* Last = NULL;  //记录上一个访问节点的值
    bool isValidBST(TreeNode* root) {
        if (root) {
            if(!isValidBST(root->left)) return false;
            if (Last && *Last >= root->val) return false; //中序遍历比较：根>左，右>根
            Last = &root->val; 
            if (!isValidBST(root->right)) return false;
            return true;
        } 
        return true;
    }
};