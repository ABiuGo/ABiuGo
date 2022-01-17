/**
 * @file 740.删除并获得点数.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 给你一个整数数组 nums ，你可以对它进行一些操作。
 * 每次操作中，选择任意一个 nums[i] ，删除它并获得 nums[i] 的点数。
 * 之后，你必须删除 所有 等于 nums[i] - 1 和 nums[i] + 1 的元素。
 * 开始你拥有 0 个点数。返回你能通过这些操作获得的最大点数。
 * @version 0.1
 * @date 2022-01-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */


class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        if(nums.size() < 1) return 0;
        int maxn = 0;
        for(int it : nums)
            maxn = max(maxn, it);
        vector<int> number(maxn+1), dp(maxn+1);
        for(int it : nums)
            number[it]++;
        dp[1] = number[1];
        for(int i = 2; i <= maxn; i++)
            dp[i] = max(dp[i-1], dp[i-2] + number[i] * i);
        return dp[maxn];
    }
};