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
//		rear = max(rear, end[s[i] - 'a']);//�ܵ��������Ǹ�ռ��rear��λ��
//		if (i == rear) {//ֻ�е��������˵�еĸ�����������ܻ����µ�����
//			ans.push_back(i - head+1);
//			head = i + 1;
//		}
//	}
//	return ans;
//}