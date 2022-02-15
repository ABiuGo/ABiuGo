/* ************************************************************************
> File Name:     1189.气球的最大数量.cpp
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  二  2/15 13:35:52 2022
> Description:   
 ************************************************************************/
/*
 * 给你一个字符串 text，你需要使用 text 中的字母来拼凑尽可能多的单词 "balloon"（气球）。
 * 字符串 text 中的每个字母最多只能被使用一次。请你返回最多可以拼凑出多少个单词 "balloon"。
 */
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> cnt(5);
        for (auto & ch : text) {
            if (ch == 'b') {
                cnt[0]++;
            } else if (ch == 'a') {
                cnt[1]++;
            } else if (ch == 'l') {
                cnt[2]++;
            } else if (ch == 'o') {
                cnt[3]++;
            } else if (ch == 'n') {
                cnt[4]++;
            }
        }
        cnt[2] /= 2;
        cnt[3] /= 2;
        return *min_element(cnt.begin(), cnt.end());
    }
};

