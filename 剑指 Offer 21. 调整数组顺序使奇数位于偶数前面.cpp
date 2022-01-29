/**
 * @file 剑指 Offer 21. 调整数组顺序使奇数位于偶数前面.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有奇数在数组的前半部分，
 * 所有偶数在数组的后半部分。
 * @version 0.1
 * @date 2022-01-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */



class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        int odd = 0,even = 0;
        int n = nums.size();
        while (even < n && odd < n) {
            if (nums[odd] % 2 == 0 && nums[even] % 2 == 0) {
                even++;
            } else if(nums[odd] % 2 == 0 && nums[even] % 2 != 0) {
                swap(nums[odd],nums[even]);
                odd++;
                even++;
            } else if (nums[odd] % 2 != 0 && nums[even] % 2 == 0) {
                odd++;
                even++;
            } else {
                odd++;
                even++;
            }
        }
        return nums;
    }
};