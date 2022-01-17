/**
 * @file 70.爬楼梯.cpp
 * @author your name (you@domain.com)
 * @brief 假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
 * 每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？
 * @version 0.1
 * @date 2022-01-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */


class Solution {
public:
    int climbStairs(int n) {
        if (n == 1 || n == 2) return n == 1? 1:2;
        int pre = 1, curr = 2, after = 3;
        for (int i = 3; i <= n; i++) {
            after = pre + curr;
            pre = curr;
            curr = after;
        }
        return curr;
    }
};