/**
 * @file 1996. 游戏中弱角色的数量.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 你正在参加一个多角色游戏，每个角色都有两个主要属性：攻击 和 防御 。给你一个二维整数数组 properties ，其中 properties[i] = [attacki, defensei] 表示游戏中第 i 个角色的属性。
 * 如果存在一个其他角色的攻击和防御等级 都严格高于 该角色的攻击和防御等级，则认为该角色为 弱角色 。更正式地，如果认为角色 i 弱于 存在的另一个角色 j ，那么 attackj > attacki 且 defensej > defensei 。
 * 返回 弱角色 的数量。
 * @version 0.1
 * @date 2022-01-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

class Solution {
public:
    static bool cmp(const vector<int>& a, const vector<int>& b) {
        return a[0] == b[0]? a[1] < b[1]: a[0] > b[0];
        //按攻击力降序，攻击相同，按防御升序排
    }
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(), properties.end(),cmp);
        int maxDef = 0;
        int ans = 0;
        for (auto & p : properties) //因为按攻击力降序，防御力升序排好，若出现防御力小于max，则说明攻击力比之前低。
            if (p[1] < maxDef) 
                ans++;
            else 
                maxDef = p[1];
        return ans;
    }
};
