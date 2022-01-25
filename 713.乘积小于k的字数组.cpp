/**
 * @file 713.乘积小于k的字数组.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 给定一个正整数数组 nums和整数 k 。
 * 请找出该数组内乘积小于 k 的连续的子数组的个数。
 * @version 0.1
 * @date 2022-01-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k == 0 || k == 1) return 0;
        int left = 0;
        int n = nums.size();
        int ans = 0;
        int temp = 1;
        for (int i = 0; i < n; ++i) {
            temp *= nums[i];
            while (temp >= k) {
                temp /= nums[left++];
            }
            ans += i-left+1;
        }
        return ans;
    }
};