//#include<iostream>
//using namespace std;
//
//#include<set>
//#include<vector>
//#include<algorithm>
//
//int longestConsecutive(vector<int>& nums) {
//    set<int> my_set;
//    sort(nums.begin(), nums.end());
//    auto pos=unique(nums.begin(), nums.end());
//    int Max = 0, sum=0;
//    for (auto it=nums.begin(); it!=pos-1; it++)
//    {
//        auto it1 = it+1;
//        if (*it1 == *it + 1) {
//            sum++;
//            Max = max(Max, sum);
//        }
//        else {
//            
//            sum = 0;
//        }
//    }
//    return Max+1;
//}
//
//
//int main()
//{
//    vector<int>nums = { 0, 3, 7, 2, 5, 8, 4, 6, 0, 1 };
//    longestConsecutive(nums);
//	return 0;
//}