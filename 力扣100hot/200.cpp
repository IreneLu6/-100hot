#include<iostream>
using namespace std;
#include<vector>


class Solution {
private:
    // 深度优先搜索函数，用于遍历岛屿中的所有陆地单元格
    void dfs(vector<vector<char>>& grid, int r, int c) {
        // 获取网格的行数和列数
        int nr = grid.size();
        int nc = grid[0].size();

        // 将当前陆地单元格标记为已访问（用'0'表示水）
        grid[r][c] = '0';

        // 递归访问当前单元格的上边相邻单元格，如果它是陆地且在网格范围内
        if (r - 1 >= 0 && grid[r - 1][c] == '1') dfs(grid, r - 1, c);

        // 递归访问当前单元格的下边相邻单元格，如果它是陆地且在网格范围内
        if (r + 1 < nr && grid[r + 1][c] == '1') dfs(grid, r + 1, c);

        // 递归访问当前单元格的左边相邻单元格，如果它是陆地且在网格范围内
        if (c - 1 >= 0 && grid[r][c - 1] == '1') dfs(grid, r, c - 1);

        // 递归访问当前单元格的右边相邻单元格，如果它是陆地且在网格范围内
        if (c + 1 < nc && grid[r][c + 1] == '1') dfs(grid, r, c + 1);
    }

public:
    // 主函数，用于计算网格中岛屿的数量
    int numIslands(vector<vector<char>>& grid) {
        // 获取网格的行数
        int nr = grid.size();
        // 如果网格为空，直接返回0
        if (!nr) return 0;
        // 获取网格的列数
        int nc = grid[0].size();

        // 初始化岛屿数量为0
        int num_islands = 0;
        // 遍历网格中的每个单元格
        for (int r = 0; r < nr; ++r) {
            for (int c = 0; c < nc; ++c) {
                // 如果当前单元格是陆地（用'1'表示）
                if (grid[r][c] == '1') {
                    // 岛屿数量加1
                    ++num_islands;
                    // 调用深度优先搜索函数，遍历当前岛屿中的所有陆地单元格
                    dfs(grid, r, c);
                }
            }
        }

        // 返回岛屿数量
        return num_islands;
    }
};