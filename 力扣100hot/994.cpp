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
//    }//把新鲜橘子数量计好，把腐烂橘子推进队列然后可以广搜
//
//    vector<pair<int, int>>dirs = { {1,0},{-1,0},{0,1},{0,-1} };//向量表示法？
//    while (!q.empty() && fresh > 0)
//    {
//        int q_len = q.size();
//        for (int i = 0; i < q_len; i++)
//        {
//            auto cur = q.front();
//            q.pop();//弹出队头腐烂橘子
//            for (auto dir : dirs)
//            {
//                int row = cur.first + dir.first;
//                int col = cur.second + dir.second;
//                //获得队头腐烂橘子的上下左右橘子
//                if (row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size() || grid[row][col] != 1)
//                    continue;
//                //如果是新鲜橘子就变腐烂，然后入腐烂橘子队尾。且新鲜橘子减少。
//                grid[row][col] = 2;
//                q.push({ row,col });
//                fresh--;
//            }
//        }
//        time++;//腐烂橘子感染完一轮，时间就+1；
//    }
//    if (fresh)
//        return -1;
//    else return time;
//}