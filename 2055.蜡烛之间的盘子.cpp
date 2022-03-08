/* ************************************************************************
> File Name:     2055.蜡烛之间的盘子.cpp
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  二  3/ 8 19:25:24 2022
> Description:   https://leetcode-cn.com/problems/plates-between-candles/
 ************************************************************************/
class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        int n = s.size();
        vector<int> left(n);
        vector<int> right(n);
        vector<int> ans;
        int plant_n = 0;
        int i = 0;
        while (s[i] == '*') {   //过滤刚开始的*
           ++i;
        }
        i == 0 ? ++i : i;       //防止19行 left[i-1]数组越界
        for (; i < n; ++i) {
            if (s[i] == '*') {  //遇到* 盘子数量++,左边界不变
               plant_n++;
               left[i] = left[i-1];
            }
            if (s[i] == '|') {    //遇到“|” 即遇到新边界,加上盘子数量就是左边界一共含有的盘子数量
                left[i] = left[i-1] + plant_n;
                right[i] = left[i];
                while (plant_n != 0) {      //往前更新前面盘子的右边界
                   right[i - plant_n] = left[i];
                   plant_n--;
                }
            }
        } 
        for (int j = 0; j < queries.size(); ++j) {
            if (queries[j][0] == queries[j][1]) {
                ans.emplace_back(0);
                continue;
            }
            left[queries[j][1]] > right[queries[j][0]] ? ans.emplace_back(left[queries[j][1]] - right[queries[j][0]]) : ans.emplace_back(0);
        }
        return ans;
    }
};
