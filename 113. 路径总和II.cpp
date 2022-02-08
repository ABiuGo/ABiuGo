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
    vector<vector<int>> ans;
    vector<int> path;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        cacu_sum(root,targetSum);
        return ans;
    }
    void cacu_sum(TreeNode* root,int targetSum) {
        if (!root) return ;
        path.push_back(root->val);
        targetSum -= root->val;
        if (!root->left && !root->right && targetSum == 0) ans.push_back(path);
        cacu_sum(root->left,targetSum);
        cacu_sum(root->right,targetSum);
        path.pop_back();
    }
};
