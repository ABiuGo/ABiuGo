/* ************************************************************************
> File Name:     798.得分最多的最小轮调.cpp
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  三  3/ 9 18:30:30 2022
> Description:   https://leetcode-cn.com/problems/smallest-rotation-with-highest-score/
 ************************************************************************/
class Solution {
public:
    int bestRotation(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        vector<int> move_without_score(n); //记录移动i位 不得分的数量
        for (int i = 0; i < n; ++i) {
            move_without_score[(i - nums[i] + n + 1) % n]++;    //(i - nums[i] + n) % n     //往左移动几位,使条件不成立
        }
        for (int i = 1; i < n; ++i) {
            move_without_score[i] += move_without_score[i-1]-1;
            if (move_without_score[i] < move_without_score[ans]) {
                ans = i;
            }
        }
        return ans;
    }
};
