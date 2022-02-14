/* ************************************************************************
> File Name:     695.岛屿的最大面积.cpp
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  一  2/14 23:20:17 2022
> Description:   
 ************************************************************************/
/*
 * 给你一个大小为 m x n 的二进制矩阵 grid 。
岛屿 是由一些相邻的 1 (代表土地) 构成的组合，这里的「相邻」要求两个 1 必须在 水平或者竖直的四个方向上 相邻。你可以假设 grid 的四个边缘都被 0（代表水）包围着。
岛屿的面积是岛上值为 1 的单元格的数目。
计算并返回 grid 中最大的岛屿面积。如果没有岛屿，则返回面积为 0 。
*/


class Solution {
public:
    int n, m;
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        n = grid.size();
        m = grid[0].size();
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == 1) {
                    ans = max(ans, dfs(grid, i, j));
                }
            }
        }
        return ans;
    }
    int dfs(vector<vector<int>>& grid, int v, int h) {
        if (v < 0 || v >= n || h < 0 || h >= m || grid[v][h] == 0) return 0;
        if (grid[v][h] == 1) {
            int maxarea = 1;
            grid[v][h] = 0;
            maxarea += dfs(grid, v-1, h);
            maxarea += dfs(grid, v+1, h);
            maxarea += dfs(grid, v, h-1);
            maxarea += dfs(grid, v, h+1);
            return maxarea;
        }
        return 0;
    }
};
