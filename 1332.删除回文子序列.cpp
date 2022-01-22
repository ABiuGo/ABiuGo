/**
 * @file 1332.删除回文子序列.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 给你一个字符串 s，它仅由字母 'a' 和 'b' 组成。每一次删除操作都可以从 s 中删除一个回文子序列。
 * 返回删除给定字符串中所有字符（字符串为空）的最小删除次数。
 * 「子序列」定义：如果一个字符串可以通过删除原字符串某些字符而不改变原字符顺序得到，那么这个字符串就是原字符串的一个子序列。
 * 「回文」定义：如果一个字符串向后和向前读是一致的，那么这个字符串就是一个回文。
 * @version 0.1
 * @date 2022-01-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */


// 原字符串是回文，则删除一次就可以，其余的先后删除a。b
class Solution {
public:
    int removePalindromeSub(string s) {
        int n = s.size();
        for (int i = 0; i < n/2; ++i) 
            if (s[i] != s[n-i-1])   return 2;
        return 1;
    }
};