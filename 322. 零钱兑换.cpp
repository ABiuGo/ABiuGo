/**
 * @file 322. 零钱兑换.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 给你一个整数数组 coins ，表示不同面额的硬币；以及一个整数 amount ，表示总金额。
 * 计算并返回可以凑成总金额所需的 最少的硬币个数 。如果没有任何一种硬币组合能组成总金额，返回 -1 。
 * 你可以认为每种硬币的数量是无限的。
 * @version 0.1
 * @date 2022-02-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */


class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,amount+1); //存储该金额的最少硬币数
        dp[0] = 0;
        for (int i = 0; i < amount+1; ++i) {
            for (int coin: coins) {
                if (i - coin < 0) {
                    continue;
                }
                dp[i] = min(dp[i],1+dp[i-coin]);
            }
        }
        return dp[amount] == amount+1 ? -1: dp[amount];
    }
};