/**
 * @file 14.最长公共前缀.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 编写一个函数来查找字符串数组中的最长公共前缀。
 * 如果不存在公共前缀，返回空字符串 ""。
 * @version 0.1
 * @date 2022-01-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if (n <= 1) return strs[0];
        string ans = strs[0]; //记录最长字串
        for (int i = 0;i < n; ++i) {
            string temp = "";
            for (int j = 0; j < ans.size(); ++j) {
                if (ans[j] == strs[i][j]) temp += strs[i][j];
                else break;
            }
            ans = temp;
        }
        return ans;
    }
};