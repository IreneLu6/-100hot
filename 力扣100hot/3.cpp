//#include <iostream>
//#include <vector>
//#include<string>
//#include<algorithm>
//#include<set>
//using namespace std;
//
//int lengthOfLongestSubstring(string s) {
//    //��������
//    set<char> set ;//ȥ��
//    int res = 0;//���
//    for (int left = 0, right = 0; right < s.length(); right++) {//ÿһ���Ҷ˵㶼��һ����
//        char ch = s[right];//rightָ���Ԫ�أ�Ҳ�ǵ�ǰҪ���ǵ�Ԫ��
//        while (set.count(ch)) {//set����ch����������߽磬ͬʱ��set���ϳ�Ԫ��
//            set.erase(s[left]);
//            left++;
//        }
//        set.insert(s[right]);//����������ǰԪ�ؼ��롣
//        res =max(res, right - left + 1);//���㵱ǰ���ظ��Ӵ��ĳ��ȡ�
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