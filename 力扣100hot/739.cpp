//#include<iostream>
//using namespace std;
//#include<vector>
//#include<stack>
//
//vector<int> dailyTemperatures(vector<int>& temperatures) {//���ɽ�������ĳ��ã��Ҿ����õ�����˼�롣
//	stack <int> temp;//ջ��ѹ���±��ǹؼ���
//	vector<int>res; res.resize(temperatures.size());
//	int time = temperatures.size() - 1;
//	for (int i = temperatures.size() - 1; i > -1; i--)
//	{
//		int tmp = temperatures[i], flag = 0;
//		while (!temp.empty())
//		{
//			if (tmp < temperatures[temp.top()]) {//�������±�����Ϣ
//				flag = 1; break;
//			}
//			else {
//				temp.pop();
//			}
//		}
//		if (flag)res[i] = temp.top() - i;
//		else res[i] = 0;
//		time--;
//		temp.push(i);
//	}
//	return res;
//}