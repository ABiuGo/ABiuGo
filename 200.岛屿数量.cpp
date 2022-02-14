/* ************************************************************************
> File Name:     200.岛屿数量.cpp
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  一  2/14 11:21:54 2022
> Description:   
 ************************************************************************/

class Solution {
public:
    int n = 0, m = 0;
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        n = grid.size();
        m = grid[0].size();
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == '1'){
                    dfs(grid, i, j);
                    ++ans;
                }
            }
        }
        return ans;
    }
    void dfs(vector<vector<char>>& grid, int v, int p) {
        if (grid[v][p] == '1') {
            grid[v][p] = '0';
            if (v-1 >= 0) dfs(grid, v-1, p);
            if (v+1 < n) dfs(grid, v+1, p);
            if (p-1 >= 0) dfs(grid, v, p-1);
            if (p+1 < m) dfs(grid, v, p+1);
        }
    }
};
