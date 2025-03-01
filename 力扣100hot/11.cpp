//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
//int maxArea(vector<int>& height) {
//	int i=0 , j=height.size()-1 ,max_v=0;
//	while (i!=j)
//	{
//		
//		max_v = max(min(height[i], height[j]) * (j - i), max_v);
//		if (height[i] < height[j])i++;
//		else j--;
//	}
//	return max_v;
//}
//
//int main()
//{
//	vector<int>h = { 1, 8, 6, 2, 5, 4, 8, 3, 7 };
//	cout<<maxArea(h);
//	return 0;
//}