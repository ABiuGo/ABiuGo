/* ************************************************************************
> File Name:     717.1比特与2比特字符.cpp
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  日  2/20 17:28:56 2022
> Description:   
 ************************************************************************/

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        for (int i = 0; i < bits.size(); ++i) {
            if (i == bits.size()-1) return true;    //恰好走到最后一格，说明最后一个字符是一比特字符
            if (bits[i] == 1) ++i;                  //遇到1跳一步
        }
        return false;
    }
};
