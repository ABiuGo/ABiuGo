/* ************************************************************************
> File Name:     695.岛屿的最大面积.cpp
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  一  2/14 23:20:17 2022
> Description:   
 ************************************************************************/



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
