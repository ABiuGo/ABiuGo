/**
 * @file 面试题 17.04. 消失的数字.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 数组nums包含从0到n的所有整数，但其中缺了一个。请编写代码找出那个缺失的整数。你有办法在O(n)时间内完成吗？
 * @version 0.1
 * @date 2022-02-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = size(nums);
        int sum = n*(n+1)/2;
        for (int i:nums) {
            sum -= i;
        }
        return sum;
    }
};