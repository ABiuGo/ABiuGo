/**
 * @file 717. 1比特与2比特字符.CPP
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-20
 * 有两种特殊字符：
 * 第一种字符可以用一个比特 0 来表示
 * 第二种字符可以用两个比特(10 或 11)来表示、
 * 给定一个以 0 结尾的二进制数组 bits ，如果最后一个字符必须是一位字符，则返回 true 。
 * @copyright Copyright (c) 2022
 * 
 */

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        for (int i = 0; i < bits.size(); ++i) {
            if (i == bits.size()-1) return true;
            if (bits[i] == 1) ++i;
        }
        return false;
    }
};