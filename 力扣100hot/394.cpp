//#include<iostream>
//using namespace std;
//#include<stack>
//#include<algorithm>
//
////void decoder(string s, int n,string& res)
////{
////	int tmp = int(s[n]);
////	if (48 < tmp&&tmp < 57)
////	{
////		for (int i = 0; i < tmp; i++)
////		{
////			decoder(s, n + 1, res);
////		}
////	}
////	else if (tmp == 91 || tmp == 93)decoder(s, n + 1, res);
////	else {
////		res.push_back(s[n]);
////		decoder(s, n + 1, res);
////	}
////	
////}
//
//string decodeString(string s) {
//	if (s.size() == 0)return "";
//	string current,res;
//	for (int i = s.size() - 1; i > -1; i--)
//	{
//		if (!isdigit(s[i]) && s[i] != '[' && s[i] != ']')current.push_back(s[i]);
//		else if (isdigit(s[i]))
//		{
//			res.clear();
//			for (int j = int(s[i]) - 48; j > 0; j--)
//			{
//				res.append(current);
//			}
//			current = res;
//		}
//	}
//	reverse(res.begin(), res.end());
//	return res;
//}
//
//int main()
//{
//	string s = "3[a]2[bc]";
//	cout << decodeString(s);
//	return 0;
//}