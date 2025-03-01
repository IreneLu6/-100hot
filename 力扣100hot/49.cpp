//#include <iostream>
//using namespace std;
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//
//vector<vector<string>> groupAnagrams(vector<string>& strs) {
//	unordered_map <string, string> my_map;
//	vector<vector<string>> my_v;
//	for (int i = 0; i < strs.size(); i++)
//	{
//		string tmp = strs[i];
//		sort(strs[i].begin(),strs[i].end());
//		my_map.insert({ strs[i], tmp });
//	}
//	for (auto it = my_map.begin(); it != my_map.end(); it++)
//	{
//		my_v.emplace_back(it->second);
//	}
//	return my_v;
//}
//
////int main()
////{
////	vector<string> strs = { "eat", "tea", "tan", "ate", "nat","bat"};
////	groupAnagrams(strs);
////	return 0;
////}