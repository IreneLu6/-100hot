#include<iostream>
using namespace std;
#include<vector>
//
//void moveZeroes(vector<int>& nums) {
//    if (nums.size() < 2) return;//��Զ��Ҫϰ�߿������鳤��<=1��ʱ��
//    int i = 0, j = 1;
//
//    while (i < nums.size() && j < nums.size()) {
//        if (nums[i] == 0) {//i����λ0ֵ
//            if (nums[j] != 0) {//j����λ����ֵ���ǵĻ��ͽ���
//                swap(nums[i], nums[j]);
//                i++;
//            }
//            j++;//������Ƿ���ֵ�ͺ���
//        }
//        else {
//            i++;//����0ֵ�Ϳ�����ǰ��
//            if (i < j) j++;//��֤j��iǰ��
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