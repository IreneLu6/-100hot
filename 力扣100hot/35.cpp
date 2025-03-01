//#include<iostream>
//using namespace std;
//#include<vector>
//
//int searchInsert(vector<int>& nums, int target) {
//	int l=0,r=nums.size()-1,n=r/2;
//	while (l<r)
//	{
//		if (nums[n] > target)
//		{
//			r = n;
//			n = (l + n) / 2;
//		}
//		else
//		{
//			l = n;
//			n = (r + n) / 2;
//		}
//	}
//	return n;
//}
//
//int main()
//{
//	vector<int> nums = { 1,3,4,5 };
//	int target = 2;
//	searchInsert(nums, target);
//}