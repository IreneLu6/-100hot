//#include <iostream>
//#include <vector>
//#include<string>
//#include<algorithm>
//#include<set>
//using namespace std;
//
//int lengthOfLongestSubstring(string s) {
//    //滑动窗口
//    set<char> set ;//去重
//    int res = 0;//结果
//    for (int left = 0, right = 0; right < s.length(); right++) {//每一轮右端点都扩一个。
//        char ch = s[right];//right指向的元素，也是当前要考虑的元素
//        while (set.count(ch)) {//set中有ch，则缩短左边界，同时从set集合出元素
//            set.erase(s[left]);
//            left++;
//        }
//        set.insert(s[right]);//别忘。将当前元素加入。
//        res =max(res, right - left + 1);//计算当前不重复子串的长度。
//    }
//    return res;
//}
//
//
//int main()
//{
//	string s = "abcabcbb";
//	cout<<lengthOfLongestSubstring(s);
//	return 0;
//}