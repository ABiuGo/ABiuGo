/**
 * @file 剑指 Offer 10- I. 斐波那契数列.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 
 * 写一个函数，输入 n ，求斐波那契（Fibonacci）数列的第 n 项（即 F(N)）。斐波那契数列的定义如下：
 * 斐波那契数列由 0 和 1 开始，之后的斐波那契数就是由之前的两数相加而得出。
 * 答案需要取模 1e9+7（1000000007），如计算初始结果为：1000000008，请返回 1。
 * @version 0.1
 * @date 2022-01-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

class Solution {
public:
    int fib(int n) {
        if (n <= 2) return !n == 0;
        long long pre = 1,curr = 1;
        long long ans = 1;
        for (int i = 2; i < n; ++i) {
            ans = (pre + curr) % 1000000007;
            pre = curr;
            curr = ans;
        }
        return ans;
    }
};

