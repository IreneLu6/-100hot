//#include<iostream>
//using namespace std;
//#include<vector>
//
//int maxProfit(vector<int>& prices) {
//	int Min = 1 << 31, Max = (1 >> 31) - 1;
//	for (int i = 0; i < prices.size(); i++)
//	{
//		Min = min(prices[i], Min);
//		Max = min(prices[i], Max);
//	}
//	return Max - Min;
//}