//#include<iostream>
//using namespace std;
//#include<vector>
//int search(vector<int>& nums, int target) {
//    // �ص㣺
//// ������һ��Ϊ��������һ����һ��������ģ���һ������������Ҳ���ǲ�������
//// ��ʱ���򲿷��ö��ַ����ҡ����򲿷���һ��Ϊ��������һ��һ��������һ���������򣬿������򡣾�����ѭ��.
//    int left = 0, right = nums.size() - 1;
//    while (left <= right) {
//        int mid = (left + right) / 2;
//        if (nums[mid] == target) return mid;
//        // ������Ϊ��������
//        if (nums[left] <= nums[mid]) {
//            //���target�������䣬�������������
//            //���target��������(��������)����ʹleft=mid+1������ת�Ƶ�������
//            if (target >= nums[left] && target < nums[mid]) right = mid - 1;
//            else left = mid + 1;
//        }
//        // ����ұ�Ϊ��������
//        else {
//            if (target > nums[mid] && target <= nums[right]) left = mid + 1;
//            else right = mid - 1;
//        }
//    }
//    return -1;
//}