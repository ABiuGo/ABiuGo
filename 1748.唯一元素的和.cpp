/**
 * @file 1748.唯一元素的和.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 给你一个整数数组 nums 。数组中唯一元素是那些只出现 恰好一次 的元素。
 * 请你返回 nums 中唯一元素的和 。
 * @version 0.1
 * @date 2022-02-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */


class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int allnum[101] = {0};
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; ++i) 
            allnum[nums[i]]++;
        for (int i = 0; i < 101; i++) 
            if (allnum[i] == 1) ans+=i;
        return ans;
    }
};