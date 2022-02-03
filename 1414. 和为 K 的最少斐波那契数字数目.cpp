/**
 * @file 1414. 和为 K 的最少斐波那契数字数目.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 给你数字 k ，请你返回和为 k 的斐波那契数字的最少数目，
 * 其中，每个斐波那契数字都可以被使用多次。
 * @version 0.1
 * @date 2022-02-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */


class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector<int> fib = {1,1};
        int ans = 0;
        // fib[0] = 1,fib[1] = 1;
        if (k <= 2) return 1;
        for (int i = 2;;++i) {      //计算刚好大于k的fib数列
                fib.push_back(fib[i-1] + fib[i-2]);
                if (fib[i] > k) {
                    k -= fib[i-1];
                    break;
                }
        }
        ans++;
        while (k != 0) {
            ans++;
            for (int i = 0;;i++) {
                if (fib[i] > k) {
                    k -= fib[i-1];
                    break;
                }
            }
        }
        return ans;
    }
};