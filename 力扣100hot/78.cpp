//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//
//
//vector<vector<int>> subsets(vector<int>& nums) {
//    vector<vector<int>> res = { {} };//��ʼ���������res = {{}}����ʱres����һ���ռ�������res.size()Ϊ1��
//    for (int i = 0; i < nums.size(); ++i) {
//        int resSize = res.size();//��ס������һ�ε�size
//        for (int j = 0; j < resSize; ++j) {
//            vector<int> newSubset = res[j];
//            newSubset.push_back(nums[i]);
//            res.push_back(newSubset);
//        }
//    }
//    return res;//��ȫ���ǻ��ݵ��������ر�����
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
