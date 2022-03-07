/**
 * @file 2100.适合打劫银行的日子.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time) {
        vector<int> ans;
        vector<int> left(security.size());
        vector<int> right(security.size());
        for (int i = 1; i < security.size(); i++) {
            if (security[i] <= security[i-1])   left[i] = left[i-1]+1;
            if (security[security.size()-i-1] <= security[security.size()-i])   right[security.size()-i-1] = right[security.size()-i]+1;
        }

        int n = security.size() - time;
        for (int i = time; i < n; i++) {
            if (left[i] >= time && right[i] >= time) ans.push_back(i);
        }
            
        return ans;
    }
};



