//#include<iostream>
//using namespace std;
//#include<vector>
//int search(vector<int>& nums, int target) {
//    // 重点：
//// 将数组一分为二，其中一定有一个是有序的，另一个可能是有序，也能是部分有序。
//// 此时有序部分用二分法查找。无序部分再一分为二，其中一个一定有序，另一个可能有序，可能无序。就这样循环.
//    int left = 0, right = nums.size() - 1;
//    while (left <= right) {
//        int mid = (left + right) / 2;
//        if (nums[mid] == target) return mid;
//        // 如果左边为有序区间
//        if (nums[left] <= nums[mid]) {
//            //如果target在左区间，则在左区间二分
//            //如果target在右区间(乱序区间)，则使left=mid+1，则能转移到右区间
//            if (target >= nums[left] && target < nums[mid]) right = mid - 1;
//            else left = mid + 1;
//        }
//        // 如果右边为有序区间
//        else {
//            if (target > nums[mid] && target <= nums[right]) left = mid + 1;
//            else right = mid - 1;
//        }
//    }
//    return -1;
//}