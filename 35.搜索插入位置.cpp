/**
 * @file 35.搜索插入位置.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 给定一个排序数组和一个目标值，在数组中找到目标值，
 * 并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
 * 请必须使用时间复杂度为 O(log n) 的算法。
 * @version 0.1
 * @date 2022-01-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */



class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int right = nums.size();
        int left = 0;
        if (target > nums[right-1]) return right;
        if (target < nums[0]) return 0;
        while(left < right) {
            int mid = left + (right - left)/2;      //防止整型溢出
            if (target == nums[mid]) return mid;    
            if (target > nums[mid]) left = mid+1; //nums[mid] < target,left取mid下一个位置
            else if (target < nums[mid]) right = mid-1; //nums[mid] > target,right取mid前一个位置。
        }
        //[x1,x2,x3……left,right,x……] left < target && right > target ,mid = left，
        //进入下一次循环，[x1,x2,x3……right,left,x……] left = mid+1，就是要插入的位置。
        return left;
    }
};