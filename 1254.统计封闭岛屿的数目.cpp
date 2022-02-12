/* ************************************************************************
> File Name:     1254.统计封闭岛屿的树木.cpp
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  六  2/12 18:59:42 2022
> Description:   
 ************************************************************************/

class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        if (n <= 2 || m <= 2) return 0; //两行或两列，所有元素都在边框
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                //在边缘处遇到岛屿，开始dfs，将其淹没
                if (grid[i][j] == 0 && (i == 0 || j == 0 || i == n-1 || j == m-1)) {
                    dfs(grid, i, j);
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                //再次遇到0岛屿，说明它没有与外界相连
                if (grid[i][j] == 0) {
                    dfs(grid, i, j);
                    ans++;
                }
            }
        }
        return ans;
    }
    void dfs(vector<vector<int>>& grid, int v, int l) {
        if (grid[v][l] == 0) grid[v][l] = 1;
        else return;
        int n = grid.size();
        int m = grid[0].size();
        if (v-1 >= 0) dfs(grid, v-1, l);
        if (l-1 >= 0) dfs(grid, v, l-1);
        if (v+1 < n) dfs(grid, v+1, l);
        if (l+1 < m) dfs(grid, v, l+1);
    }
};
