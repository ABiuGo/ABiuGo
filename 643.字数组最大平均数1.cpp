/**
 * @file 643.字数组最大平均数1.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 给你一个由 n 个元素组成的整数数组 nums 和一个整数 k 。
 * 请你找出平均数最大且 长度为 k 的连续子数组，并输出该最大平均数。
 * 任何误差小于 10-5 的答案都将被视为正确答案。
 * @version 0.1
 * @date 2022-01-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */


class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum = 0;
        for (int i = 0; i < k; ++i) {
            sum += nums[i];
        }
        double maxSum = sum;
        for (int i = 0; i < n-k; ++i) {
            sum -= nums[i];
            sum += nums[i+k];
            maxSum = max(maxSum,sum);
        }
        return maxSum/k;
    }
};