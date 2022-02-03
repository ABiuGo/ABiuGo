/**
 * @file 2000.反转单词前缀.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 给你一个下标从 0 开始的字符串 word 和一个字符 ch 。
 * 找出 ch 第一次出现的下标 i ，反转 word 中从下标 0 开始、直到下标
 *  i 结束（含下标 i ）的那段字符。如果 word 中不存在字符 ch ，则
 * 无需进行任何操作。
 * 例如，如果 word = "abcdefd" 且 ch = "d" ，那么你应该 反转 
 * 从下标 0 开始、直到下标 3 结束（含下标 3 ）。结果字符串将会是 
 * "dcbaefd" 。
 * 返回 结果字符串 。
 * @version 0.1
 * @date 2022-02-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();
        int end = 0;
        for (int i = 0; i < n; i++) {
            if (word[i] == ch) {
                end = i; //找到ch位置
                break;
            }
        }
        int start = 0;
        while (start < end) { //与ch位置前后依次交换
            swap(word[start],word[end]);
            start++;
            end--;
        }
        return word;
    }
};