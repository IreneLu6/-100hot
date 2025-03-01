//#include<iostream>
//using namespace std;
//#include<vector>
//#include<unordered_map>
//#include<set>
//#include<algorithm>
//#include<cstring>
//
//bool backtracking(vector<vector<char>>& board, string word, int i, int j, int correct)
//{
//    if (correct == word.length()) return true;
//    if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size()) return false;
//    if (board[i][j] != word[correct]) return false;
//
//    char tmp = board[i][j];
//    board[i][j] = '0'; // 用'0'标记为已访问
//    correct++;
//
//    if (backtracking(board, word, i + 1, j, correct)) return true;
//    if (backtracking(board, word, i - 1, j, correct)) return true;
//    if (backtracking(board, word, i, j + 1, correct)) return true;
//    if (backtracking(board, word, i, j - 1, correct)) return true;
//
//    correct--;
//    board[i][j] = tmp; // 恢复状态
//
//    return false;
//}
//
//bool exist(vector<vector<char>>& board, string word) {
//    for (int i = 0; i < board.size(); i++)
//    {
//        for (int j = 0; j < board[0].size(); j++)
//        {
//            if (backtracking(board, word, i, j, 0)) return true;
//        }
//    }
//    return false;
//}
//
//int main()
//{
//	vector<vector<char>>board = { {'a','a'} };
//	string word = "aaa";
//	exist(board, word);
//	return 0;
//}