/**
 * @file 买卖股票最佳时时机.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 给定一个数组 prices ，它的第 i 个元素 prices[i] 表示一支给定股票第 i 天的价格。
 * 你只能选择 某一天 买入这只股票，并选择在 未来的某一个不同的日子 卖出该股票。
 * 设计一个算法来计算你所能获取的最大利润。返回你可以从这笔交易中获取的最大利润。
 * 如果你不能获取任何利润，返回 0 。
 * @version 0.1
 * @date 2022-01-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */



class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 1) return 0;
        int min_P = prices[0];
        vector<int> dp(n,0);      //存放当前最大利润
        for (int i = 1; i < n; ++i) {
            min_P = min(min_P,prices[i]);
            dp[i] = max(prices[i] - min_P,dp[i-1]);
        }
        return dp[n-1];
    }
};