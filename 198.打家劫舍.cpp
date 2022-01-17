/**
 * @file 198.打家劫舍.cpp
 * @author your name (you@domain.com)
 * @brief 你是一个专业的小偷，计划偷窃沿街的房屋。每间房内都藏有一定的现金，
 * 影响你偷窃的唯一制约因素就是相邻的房屋装有相互连通的防盗系统，如果两间相邻
 * 的房屋在同一晚上被小偷闯入，系统会自动报警。
 *给定一个代表每个房屋存放金额的非负整数数组，计算你 触动警报装置的情况下 ，一夜之内能够偷窃到的最高金额。
 *
 * @version 0.1
 * @date 2022-01-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();        
        if (n == 1) return nums[0];
        //内存压缩

        int pre = nums[0];
        int curr = nums[1]>nums[0]?nums[1]:nums[0];
        for (int i = 2; i < n; ++i) {
            int temp = curr;
            curr = max(pre+nums[i],curr);
            pre = temp;
        }
        return curr;

        //dp表

        // vector<int> dp(n+1);
        // dp[0] = nums[0];             
        // dp[1] = nums[1]>nums[0]?nums[1]:nums[0];
        // for (int i = 2; i < n; ++i) {
        //     dp[i] = max(dp[i-2]+nums[i], dp[i-1]);
        // }
        // return dp[n-1];
    }
};