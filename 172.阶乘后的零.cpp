/**
 * @file 172.阶乘后的零.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief https://leetcode-cn.com/problems/factorial-trailing-zeroes/
 * @version 0.1
 * @date 2022-03-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */


class Solution {
public:
    int trailingZeroes(int n) {
        int res = 0;
        long divisor = 5;
        while (divisor <= n) {
            res += n / divisor;
            divisor *= 5;
        }
        return res;
    }
};