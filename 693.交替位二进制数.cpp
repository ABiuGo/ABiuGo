/**
 * @file 693.交替位二进制数.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief https://leetcode-cn.com/problems/binary-number-with-alternating-bits/
 * @version 0.1
 * @date 2022-03-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */


class Solution {
public:
    bool hasAlternatingBits(int n) {
        return (!(n & (n >> 1))) & ((n | (n >> 2)) == n);
    }
};