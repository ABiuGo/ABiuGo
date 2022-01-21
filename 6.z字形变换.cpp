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
        int n = s.size();
        if (numRows == 1) return s;
        int T = 2*(numRows-1);     //周期
        vector<string> ans(numRows,"");
        for (int i = 0; i < n; ++i) {
            if (i % T >= numRows) {
                ans[T-(i%T)] += s[i];
            } else {
                ans[i%T] += s[i];
            }
        }
        string asc = "";
        for (string i:ans){
            asc += i;
        }
        return asc;
    }
};