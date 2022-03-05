/**
 * @file 6.z字形变换.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 将一个给定字符串 s 根据给定的行数 numRows ，以从上往下、从左到右进行 Z 字形排列。
 * @version 0.1
 * @date 2022-01-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */


class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        string asc = "";
        int n = s.size();
        int T = 2 * (numRows - 1);      //找规律2 * (numRows - 1)为一组
        vector<string> ans(numRows, "");//存储变形后每一行的字符串
        for (int i = 0; i < n; ++i) {
            if (i % T >= numRows) {
                ans[T - (i % T)] += s[i];
            } else {
                ans[i % T] += s[i];
            }
        }
        for (string i: ans) asc += i;
        //把每一行拼接起来
        return asc;
    }
};