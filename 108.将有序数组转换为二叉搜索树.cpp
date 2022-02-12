/* ************************************************************************
> File Name:     108.将有序数组转换为二叉搜索树.cpp
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  六  2/12 18:18:59 2022
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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return build(nums, 0, nums.size()-1);
    }
    TreeNode* build(vector<int>& nums, int L, int R) {
        if (L > R) return NULL;
        int mid = (L+R) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = build(nums, L, mid-1);
        root->right = build(nums, mid+1, R);
        return root;
    }

};
