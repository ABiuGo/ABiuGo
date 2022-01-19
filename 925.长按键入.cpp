/**
 * @file 925.长按键入.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 你的朋友正在使用键盘输入他的名字 name。偶尔，在键入字符 c 时，
 * 按键可能会被长按，而字符可能被输入 1 次或多次。
 * 你将会检查键盘输入的字符 typed。如果它对应的可能是你的朋友的名字（其中一些字符可能被长按），
 * 那么就返回 True。
 * @version 0.1
 * @date 2022-01-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */


class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        if (name == typed) return true;
        int len_n = name.size();
        int len_t = typed.size();
        if (len_n > len_t || (len_t == len_n && name != typed)) return false;
        int i = 0, j = 0;
        while(i < len_n && j < len_t) {
            if (name[i] == typed[j]) { 
                i++;
                j++;
            } else if (i != 0 && name[i-1] == typed[j]) { //i跑的比j快
                j++;
            } else return false;
        }
        while (j < len_t) {             // j未到达typed终点
            if (typed[j] != name[i-1]) return false;
            j++;
        }
        return i == len_n;
    }
};