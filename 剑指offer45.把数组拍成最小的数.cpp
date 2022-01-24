/**
 * @file 剑指offer45.把数组拍成最小的数.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 输入一个非负整数数组，把数组里所有数字拼接起来排成一个数，打印能拼接出的所有数字中最小的一个。
 * @version 0.1
 * @date 2022-01-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */


class Solution {
public:
    static bool cmp(int a, int b) { //自定义排序
        return to_string(a) + to_string(b) < to_string(b) + to_string(a);
    }
    string minNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),cmp);
        string ans = "";
        for (int x:nums)
            ans += to_string(x);
        return ans;
    }
};