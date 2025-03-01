//#include<iostream>
//using namespace std;
//#include<vector>
//#include<stack>
//
//vector<int> dailyTemperatures(vector<int>& temperatures) {//灵茶山艾府讲的超好！我就是用的他的思想。
//	stack <int> temp;//栈中压入下标是关键！
//	vector<int>res; res.resize(temperatures.size());
//	int time = temperatures.size() - 1;
//	for (int i = temperatures.size() - 1; i > -1; i--)
//	{
//		int tmp = temperatures[i], flag = 0;
//		while (!temp.empty())
//		{
//			if (tmp < temperatures[temp.top()]) {//可以用下标获得信息
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