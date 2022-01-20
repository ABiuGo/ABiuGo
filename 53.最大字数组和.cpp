/**
 * @file 53.最大字数组和.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 给你一个整数数组 nums ，请你找出一个具有最大和的连续子数组
 * （子数组最少包含一个元素），返回其最大和。
 * @version 0.1
 * @date 2022-01-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += nums[i];
            ans = max(sum,ans); 
            sum = sum <= 0? 0:sum;  // 负数往后相加会使后面的变小
        }
        return ans;
    }
};