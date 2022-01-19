/**
 * @file 219.存在重复元素2.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief  给你一个整数数组 nums 和一个整数 k ，
 * 判断数组中是否存在两个 不同的索引 i 和 j ，
 * 满足 nums[i] == nums[j] 且 abs(i - j) <= k 。
 * 如果存在，返回 true ；否则，返回 false 。
 * @version 0.1
 * @date 2022-01-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> eleNum;  //哈希表存储数字和下标
        for (int i = 0; i < n; ++i) {
            if (eleNum.count(nums[i])) { //遇到重复元素，下标相减和k比对
                if (i - eleNum[nums[i]] <= k) return true;
                eleNum[nums[i]] = i;
            }
            eleNum[nums[i]] = i;
        }
        return false;
    }
};