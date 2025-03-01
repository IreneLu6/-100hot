//#include<iostream>
//using namespace std;
//#include<vector>
//#include<unordered_map>
//#include<set>
//#include<algorithm>
//
//
//
//
//void backtrack(vector<string>& ans, string& cur, int open, int close, int n) {
//    if (cur.size() == n * 2) {
//        ans.push_back(cur);
//        return;
//    }
//    if (open < n) {
//        cur.push_back('(');
//        backtrack(ans, cur, open + 1, close, n);
//        cur.pop_back();
//    }
//    if (close < open) {
//        cur.push_back(')');
//        backtrack(ans, cur, open, close + 1, n);
//        cur.pop_back();
//    }
//}
//
//vector<string> generateParenthesis(int n) {
//    vector<string> result;
//    string current;
//    backtrack(result, current, 0, 0, n);
//    return result;
//}
//
//
//int main()
//{
//    vector<string> res  ;
//    res=generateParenthesis(3);
//    return 0;
//}