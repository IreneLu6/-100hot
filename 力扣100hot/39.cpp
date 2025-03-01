//#include<iostream>
//using namespace std;
//#include<vector>
//#include<unordered_map>
//#include<set>
//#include<algorithm>
//
//void backtracking(vector <vector<int>>& res, vector<int>& candidates, vector<int>& combination, int target, int sum,set<vector<int>>&De)
//{
//	if (sum == target) { 
//		vector<int> tmp=combination;
//		sort(tmp.begin(), tmp.end());
//		if (!De.count(tmp))
//		{
//			De.insert(tmp);
//			res.push_back(combination);
//		}
//	}
//	else if (sum < target) {
//		for (int i = 0; i < candidates.size(); i++)
//		{
//			sum += candidates[i];
//			combination.push_back(candidates[i]);
//			backtracking(res, candidates, combination, target, sum,De);
//			combination.pop_back();
//			sum -= candidates[i];
//		}
//	}
//}
//
//
//vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//	vector<vector<int>> res;
//	vector<int>combination;
//	set<vector<int>> Deduplication;
//	backtracking(res, candidates, combination, target, 0,Deduplication);
//	return res;
//}
//
//int main()
//{
//	vector<int> can = { 2,3,6,7 };
//	int target = 7;
//	combinationSum(can, target);
//	return 0;
//}