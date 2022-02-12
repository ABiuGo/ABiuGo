/* ************************************************************************
> File Name:     1020.飞地的数量.cpp
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  六  2/12 18:48:38 2022
> Description:   
 ************************************************************************/


class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        if (n <= 2 || m <= 2) return 0; //两行或两列，所有元素都在边框
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                //在边缘处遇到1，开始dfs，将贴近边缘的所有1都变为0。
                if (grid[i][j] == 1 && (i == 0 || j == 0 || i == n-1 || j == m-1)) {
                    dfs(grid, i, j);
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == 1) ans++;
            }
        }
        return ans;
    }
    void dfs(vector<vector<int>>& grid, int v, int l) {
        if (grid[v][l] == 1) grid[v][l] = 0;
        else return;
        int n = grid.size();
        int m = grid[0].size();
        if (v-1 >= 0) dfs(grid, v-1, l);
        if (l-1 >= 0) dfs(grid, v, l-1);
        if (v+1 < n) dfs(grid, v+1, l);
        if (l+1 < m) dfs(grid, v, l+1);
    }


};
