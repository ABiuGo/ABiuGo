/**
 * @file 2006. 差的绝对值为 K 的数对数目.CPP
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 给你一个整数数组 nums 和一个整数 k ，
 * 请你返回数对 (i, j) 的数目，满足 i < j 且 |nums[i] - nums[j]| == k 。
 * @version 0.1
 * @date 2022-02-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */


class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                if (abs(nums[i]-nums[j]) == k) {
                    ans++;
                }
            }
        }
        return ans;
    }
};