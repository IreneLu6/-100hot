//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//vector<int> searchRange(vector<int>& nums, int target) {
//	vector<int>res;
//	res.resize(2);
//	int left = 0, right = nums.size() - 1, mid = (left + right) / 2;
//	while (left < right)
//	{
//		if (target > nums[mid]||(mid+1!= nums.size()&&nums[mid+1]==target)) {
//			left = mid + 1;
//		}
//		else if (target < nums[mid]|| (mid - 1 >= 0 && nums[mid - 1] == target)) {
//			right = mid - 1;
//		}
//		else break;
//		mid = (left + right) / 2;
//	}
//	if(nums[mid]!=target)res[1] = -1;
//	else res[1] = mid;
//	left = 0, right = nums.size() - 1, mid = (left + right) / 2;
//	while (left < right)
//	{
//		if (target > nums[mid] || (mid - 1 >=0 &&nums[mid - 1] == target)) {
//			left = mid + 1;
//		}
//		else if (target < nums[mid] || (mid + 1 != nums.size() && nums[mid + 1] == target)) {
//			right = mid - 1;
//		}
//		else break;
//		mid = (left + right) / 2;
//	}
//	if (nums[mid] != target)res[0] = -1;
//	else res[0] = mid;
//	return nums;
//}
//
//int main()
//{
//	vector<int> nums = { 5, 7, 7, 8, 8, 10 }; int  target = 8;
//	searchRange(nums, target);
//}