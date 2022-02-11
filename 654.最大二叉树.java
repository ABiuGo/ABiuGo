/* ************************************************************************
> File Name:     654.最大二叉树.java
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  五  2/11 19:44:19 2022
> Description:   
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode constructMaximumBinaryTree(int[] nums) {
        return bulid(nums, 0, nums.length-1);
    }
    public TreeNode bulid(int[] nums, int L_n, int R_n) {
        if (L_n > R_n) return null;
        int index = -1, max_val = Integer.MIN_VALUE;
        for (int i = L_n; i <= R_n; ++i) {
            if (nums[i] > max_val) {
                index = i;
                max_val = nums[i];
            }
        }
        TreeNode root = new TreeNode(max_val);//找到数组中最大的数
        root.left = bulid(nums, L_n, index-1);//最大的数左边最大值为左节点，右边最大值为右节点,递归构建二叉树。
        root.right = bulid(nums, index+1, R_n);
        return root;
    }
}


