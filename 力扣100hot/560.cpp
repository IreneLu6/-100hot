//#include<iostream>
//using namespace std;
//#include<vector>
//
//int subarraySum(vector<int>& nums, int k) {
//	int i = 0, j = 0,len=nums.size();
//	if (!len)return 0;
//	if (len == 1)
//	{
//		if (nums[0] == k)return 1;
//		else return 0;
//	}
//	int sum=0 ,suc=0;
//	while (j < len)
//	{
//		if(sum < k) {
//			 sum += nums[j]; j++;
//		}
//		else if(sum > k)
//		{
//			sum -= nums[i]; i++;
//		}
//		else {
//			suc++; 
//			sum -= nums[i];  
//			i++;
//		}
//	}
//	return suc;
//}
//
//int main()
//{
//	vector<int> nums = { 1,1,1 };
//	cout<<subarraySum(nums,2);
//	return 0;
//
//}