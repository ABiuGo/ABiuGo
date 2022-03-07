/* ************************************************************************
> File Name:     504.七进制数.cpp
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  一  3/ 7 18:02:50 2022
> Description:   https://leetcode-cn.com/problems/base-7/
 ************************************************************************/


class Solution {
public:
    string convertToaBase7(int num) {
        if (num == 0) return "0";
        string ans = "";
        int N_num = num < 0 ? 0-num : num;
        while (N_num) {
            ans = to_string(N_num%7) + ans;
            N_num /= 7;
        }
        ans = num < 0 ? "-" + ans : ans;
        return ans;
    }
};
