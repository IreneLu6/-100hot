//#include<iostream>
//using namespace std;
//#include<vector>
//#include<set>
//
//vector<int> partitionLabels(string s) {
//	vector<int> end(26);
//	vector<int>ans;
//	for (int i = 0; i < s.length(); i++)
//	{
//		int tmp = s[i] - 'a';
//		end[tmp] = i;
//	}
//	int head = 0, rear = 0;
//	for (int i = 0; i < s.length(); i++)
//	{
//		rear = max(rear, end[s[i] - 'a']);//能到达更后的那个占着rear的位置
//		if (i == rear) {//只有到了这个传说中的该区间的最后才能划分新的区间
//			ans.push_back(i - head+1);
//			head = i + 1;
//		}
//	}
//	return ans;
//}