#include<iostream>
using namespace std;
#include<vector>


class Solution {
private:
    // ��������������������ڱ��������е�����½�ص�Ԫ��
    void dfs(vector<vector<char>>& grid, int r, int c) {
        // ��ȡ���������������
        int nr = grid.size();
        int nc = grid[0].size();

        // ����ǰ½�ص�Ԫ����Ϊ�ѷ��ʣ���'0'��ʾˮ��
        grid[r][c] = '0';

        // �ݹ���ʵ�ǰ��Ԫ����ϱ����ڵ�Ԫ���������½����������Χ��
        if (r - 1 >= 0 && grid[r - 1][c] == '1') dfs(grid, r - 1, c);

        // �ݹ���ʵ�ǰ��Ԫ����±����ڵ�Ԫ���������½����������Χ��
        if (r + 1 < nr && grid[r + 1][c] == '1') dfs(grid, r + 1, c);

        // �ݹ���ʵ�ǰ��Ԫ���������ڵ�Ԫ���������½����������Χ��
        if (c - 1 >= 0 && grid[r][c - 1] == '1') dfs(grid, r, c - 1);

        // �ݹ���ʵ�ǰ��Ԫ����ұ����ڵ�Ԫ���������½����������Χ��
        if (c + 1 < nc && grid[r][c + 1] == '1') dfs(grid, r, c + 1);
    }

public:
    // �����������ڼ��������е��������
    int numIslands(vector<vector<char>>& grid) {
        // ��ȡ���������
        int nr = grid.size();
        // �������Ϊ�գ�ֱ�ӷ���0
        if (!nr) return 0;
        // ��ȡ���������
        int nc = grid[0].size();

        // ��ʼ����������Ϊ0
        int num_islands = 0;
        // ���������е�ÿ����Ԫ��
        for (int r = 0; r < nr; ++r) {
            for (int c = 0; c < nc; ++c) {
                // �����ǰ��Ԫ����½�أ���'1'��ʾ��
                if (grid[r][c] == '1') {
                    // ����������1
                    ++num_islands;
                    // ���������������������������ǰ�����е�����½�ص�Ԫ��
                    dfs(grid, r, c);
                }
            }
        }

        // ���ص�������
        return num_islands;
    }
};