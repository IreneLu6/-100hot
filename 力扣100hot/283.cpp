#include<iostream>
using namespace std;
#include<vector>
//
//void moveZeroes(vector<int>& nums) {
//    if (nums.size() < 2) return;//永远都要习惯考虑数组长度<=1的时候
//    int i = 0, j = 1;
//
//    while (i < nums.size() && j < nums.size()) {
//        if (nums[i] == 0) {//i负责定位0值
//            if (nums[j] != 0) {//j负责定位非零值，是的话就交换
//                swap(nums[i], nums[j]);
//                i++;
//            }
//            j++;//如果不是非零值就后移
//        }
//        else {
//            i++;//不是0值就可以向前了
//            if (i < j) j++;//保证j在i前面
//        }
//    }
//}

// 
// 
//
//int main()
//{
//	vector<int>nums = { 0,1,0,3,12 };
//	moveZeroes(nums);
//	for (int i = 0; i < nums.size(); i++)
//	{
//		cout << nums[i] << " ";
//	}
//	return 0;
//}