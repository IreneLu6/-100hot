//#include<iostream>
//using namespace std;
//#include<vector>
//#include<queue>
//
//
//int orangesRotting(vector<vector<int>>& grid) {
//    queue<pair<int, int>> q;
//    int time = 0, fresh = 0;
//    for (int r = 0; r < grid.size(); r++)
//    {
//        for (int c = 0; c < grid[0].size(); c++)
//        {
//            if (grid[r][c] == 1)fresh++;
//            else if (grid[r][c] == 2)q.push({ r,c });
//        }
//    }//���������������ƺã��Ѹ��������ƽ�����Ȼ����Թ���
//
//    vector<pair<int, int>>dirs = { {1,0},{-1,0},{0,1},{0,-1} };//������ʾ����
//    while (!q.empty() && fresh > 0)
//    {
//        int q_len = q.size();
//        for (int i = 0; i < q_len; i++)
//        {
//            auto cur = q.front();
//            q.pop();//������ͷ��������
//            for (auto dir : dirs)
//            {
//                int row = cur.first + dir.first;
//                int col = cur.second + dir.second;
//                //��ö�ͷ�������ӵ�������������
//                if (row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size() || grid[row][col] != 1)
//                    continue;
//                //������������Ӿͱ丯�ã�Ȼ���븯�����Ӷ�β�����������Ӽ��١�
//                grid[row][col] = 2;
//                q.push({ row,col });
//                fresh--;
//            }
//        }
//        time++;//�������Ӹ�Ⱦ��һ�֣�ʱ���+1��
//    }
//    if (fresh)
//        return -1;
//    else return time;
//}