/**
 * @file 1078.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 
 * 给出第一个词 first 和第二个词 second，考虑在某些文本 text 中
 * 可能以 "first second third" 形式出现的情况，其中 second 紧随
 *  first 出现，third 紧随 second 出现。对于每种这样的情况，将第三个词 "third" 添加到答案中，并返回答案。
 * @version 0.1
 * @date 2021-12-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> word;
        vector<string> ans;
        int t_size = size(text);
        int wordlen = 0;
        string str = "";
        for (int i = 0; i < t_size; i++){
            if (text[i] != ' ') {
                str += text[i];
                if (i == t_size-1) {
                    word.push_back(str);
                    wordlen++;
                }
            } else {
                word.push_back(str);
                wordlen++;
                str = "";
            }
        }
        for (int i = 0; i < wordlen-2; i++) 
            if (word[i] == first && word[i+1] == second)
                ans.push_back(word[i+2]);
        return ans;
    }
};