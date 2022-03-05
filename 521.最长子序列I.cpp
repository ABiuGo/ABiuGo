/* ************************************************************************
> File Name:     521.最长子序列I.cpp
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  六  3/ 5 10:48:22 2022
> Description:   https://leetcode-cn.com/problems/longest-uncommon-subsequence-i/
 ************************************************************************/
class Solution {
public:
    int findLUSlength(string a, string b) {
        return a != b ? max(a.length(), b.length()) : -1;
    }
};
