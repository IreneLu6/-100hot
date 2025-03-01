//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
//vector<vector<int>> merge(vector<vector<int>>& intervals) {
//	vector<vector<int>> merge_in;
//	sort(intervals.begin(), intervals.end());
//	int i = 1, j = 0;
//	merge_in.push_back(intervals[0]);
//	for (i,j; i < intervals.size(); i++)
//	{
//		if (merge_in[j][1] >= intervals[i][0])
//		{
//			int l = min(merge_in[j][0], intervals[i][0]), r = max(merge_in[j][1], intervals[i][1]);
//			merge_in.pop_back();
//			merge_in.push_back({l,r });
//		}
//		else
//		{
//			merge_in.push_back(intervals[i]);
//			j++;
//		}
//		
//	}
//	/*if(i== intervals.size())
//		merge_in.push_back( intervals[i-1]);*/
//	
//	return merge_in;
//}
//
//
//
//
//
//int main()
//{
//	vector<vector<int>> nums = { {1,4} ,{0,2},{3,5} };
//	merge(nums);
//	return 0;
//}