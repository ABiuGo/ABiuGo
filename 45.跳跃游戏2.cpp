/**
 * @file 45.跳跃游戏2.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 给你一个非负整数数组 nums ，你最初位于数组的第一个位置。
 * 数组中的每个元素代表你在该位置可以跳跃的最大长度。
 * 你的目标是使用最少的跳跃次数到达数组的最后一个位置。
 * 假设你总是可以到达数组的最后一个位置。
 * @version 0.1
 * @date 2022-01-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */



class Solution {
public:
    int jump(vector<int>& nums) {
        int Size = nums.size();
        if (Size == 1) return 0;
        int reach = 0;
        int nextReach = nums[0];
        int step = 0;
        for (int i = 0; i < Size; ++i) {
            nextReach = max(nums[i] + i, nextReach);
            if (nextReach >= Size-1) return step+1;
            if (i == reach) {
                step++;
                reach = nextReach;
            }
        }
        return step;
    }
};