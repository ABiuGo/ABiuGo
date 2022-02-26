/* ************************************************************************
> File Name:     2016.增量元素之间的最大差值.cpp
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  六  2/26 17:20:07 2022
> Description:   https://leetcode-cn.com/problems/maximum-difference-between-increasing-elements/
 ************************************************************************/

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int MIN = nums[0];  //记录当前遇到的最小值
        int ans = -1;       //记录当前最大差值
        for (int i = 1; i < nums.size(); ++i)
            if (nums[i] <= MIN) //遇到比MIN小的值,更新最小值
                MIN = nums[i];
            else
                ans = max(ans, nums[i] - MIN);  //遇到大于ans的值,更新ans;
        return ans;
    }
};
