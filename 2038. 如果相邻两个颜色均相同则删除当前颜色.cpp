/**
 * @file 2038. 如果相邻两个颜色均相同则删除当前颜色.CPP
 * @author Crpdim (crpdim7@gmail.com)
 * @brief https://leetcode-cn.com/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color/
 * @version 0.1
 * @date 2022-03-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */



class Solution {
public:
    bool winnerOfGame(string colors) {
        int num_A = 0, num_B = 0;
        bool is_A = true;
        for (int i = 1; i < colors.size(); ++i) {
            if (colors[i] == 'A' && colors[i-1] == 'A' && colors[i+1] == 'A') ++num_A;
            else if (colors[i] == 'B' && colors[i+1] == 'B' && colors[i-1] == 'B') ++num_B;
        }
        return num_A > num_B;
    }
};