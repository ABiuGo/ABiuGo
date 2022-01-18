/**
 * @file 55.跳跃游戏.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 给定一个非负整数数组 nums ，你最初位于数组的 第一个下标 。
 * 数组中的每个元素代表你在该位置可以跳跃的最大长度。
 * 判断你是否能够到达最后一个下标。
 * @version 0.1
 * @date 2022-01-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

class Solution {
public:
    
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return true;
        int MAX = 0;                //能到达的最大下标
        for (int i = 0; i < n-1; ++i) {
            MAX = max(MAX,i+nums[i]);
            if (i >= MAX)           //i超过了可以达到的最大范围
                return false;
        }
        return MAX >= n-1;
    }
};