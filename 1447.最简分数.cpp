/**
 * @file 1447.最简分数.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

//枚举分子和分母，若分子分母的最大公约数为 11，则我们找到了一个最简分数。

class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> ans;
        for (int i = 2; i <= n; ++i) {
            for (int j = 1; j <= i; ++j) {
                if (__gcd(j,i) == 1) {
                    ans.push_back(to_string(j)+'/'+to_string(i));
                }
            }
        }
        return ans;
    }
};