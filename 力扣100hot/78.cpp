//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//
//
//vector<vector<int>> subsets(vector<int>& nums) {
//    vector<vector<int>> res = { {} };//初始化结果集：res = {{}}，此时res包含一个空集，所以res.size()为1。
//    for (int i = 0; i < nums.size(); ++i) {
//        int resSize = res.size();//记住的是上一次的size
//        for (int j = 0; j < resSize; ++j) {
//            vector<int> newSubset = res[j];
//            newSubset.push_back(nums[i]);
//            res.push_back(newSubset);
//        }
//    }
//    return res;//完全不是回溯的做法，特别神奇
//}
//
////res = {{}}
////{{}, {1}}
////{{*}, {1}, {2^}}
////{{}, {1*}, {2}, {1, 2^}}
////{ {*}, { 1 }, { 2 }, { 1, 2 }, { 3^ }}
////{ {}, { 1* }, { 2 }, { 1, 2 }, { 3^ }, { 1, 3 }}
////{{}, {1}, {2*}, {1, 2}, {3}, {1, 3}, {2, 3^}}
////{{}, {1}, {2}, {1, 2}*, {3}, {1, 3}, {2, 3}, {1, 2, 3^}}
