//#include <iostream>
//#include <vector>
//using namespace std;
//#include<algorithm>
//
////vector<vector<int>> threeSum(vector<int>& nums) {
////	int l, r;
////	vector<vector<int>> Sum;
////	sort(nums.begin(), nums.end());
////	for (int i=0; i < nums.size(); i++)
////	{
////		if (i>0&&nums[i] == nums[i - 1])continue;
////		int tmp = 0 - nums[i];
////		l = i + 1; r = l+1;
////		while (r < nums.size()&&l<nums.size())
////		{
////			if (l!=i+1&&nums[l] == nums[l - 1]) { l++; r++; continue; }
////			int two_sum = nums[l] + nums[r];
////			if (two_sum > tmp)break;
////			if (two_sum == tmp)
////			{
////				Sum.push_back({ nums[i], nums[l], nums[r] });
////				l = i + 1; r++;
////			}
////			else if (two_sum < tmp)
////			{
////				if (r < nums.size() - 1)r++;
////				else l++;
////			}
////			
////		}
////	}
////	return Sum;
////}
//
//
//vector<vector<int>> threeSum(vector<int>& nums) {
//	int l, r;
//	vector<vector<int>> Sum;
//	sort(nums.begin(), nums.end());
//	for (int i = 0; i < nums.size(); i++)
//	{
//		if (i > 0 && nums[i] == nums[i - 1])continue;
//		l = i + 1; r = nums.size() - 1;
//		int tmp = 0 - nums[i];
//		while (l < r)
//		{
//			if (l != i + 1 && nums[l] == nums[l - 1]) { l++; continue; }
//			int two_sum = nums[l] + nums[r];
//			if (two_sum > tmp)r--;
//			else if (two_sum == tmp)
//			{
//				Sum.push_back({ nums[i], nums[l], nums[r] });
//				l++; r--;
//			}
//			else l++;
//		}
//	}
//	return Sum;
//}
//
//
//
//
//int main()
//{
//	vector<int>nums = { -1,0,1,2,-1,-4 };
//	threeSum(nums);
//	return 0;
//}