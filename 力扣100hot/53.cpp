//#include<iostream>
//#include<vector>
//using namespace std;
//
//int maxSubArray(vector<int>& nums) {
//	int i = 0;
//	int sum = 0, max_sum = -10000000;
//	for (int i = 0; i < nums.size(); i++)
//	{
//		sum += nums[i];
//		max_sum = max(max_sum, sum);
//		if (sum <= 0 && i != nums.size() - 1)sum = 0;
//		
//	}
//	return max_sum;
//}
//
//
//int main()
//{
//	vector<int> nums = { -2,-1 };
//	cout<<maxSubArray(nums);
//	return 0;
//}