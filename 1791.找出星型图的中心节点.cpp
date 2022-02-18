/* ************************************************************************
> File Name:     1791.找出星型图的中心节点.cpp
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  五  2/18 09:29:13 2022
> Description:   
 ************************************************************************/
/*
 *有一个无向的 星型 图，由 n 个编号从 1 到 n 的节点组成。星型图有一个 中心 节点，并且恰有 n - 1 条边将中心节点与其他每个节点连接起来。
 *给你一个二维整数数组 edges ，其中 edges[i] = [ui, vi] 表示在节点 ui 和 vi 之间存在一条边。请你找出并返回 edges 所表示星型图的中心节点。
 * */
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int ans = edges[0][0];
        return ans == edges[1][0] || ans == edges[1][1] ? ans : edges[0][1];
    }
};
