/**
 * @file 179.最大数.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 给定一组非负整数 nums，重新排列每个数的顺序（每个数不可拆分）使之组成一个最大的整数。
 * @version 0.1
 * @date 2022-01-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */



class Solution {
public:

    static bool cmp(int a,int b) {
        string sa = to_string(a);
        string sb = to_string(b);
        return sa+sb>sb+sa;
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),cmp);
        string ans;
        for (auto num:nums) {
            if (!(num == 0 && ans[0] == '0')) ans += to_string(num); //
        }
        return ans;
    }
};