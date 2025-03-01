//#include <iostream>
//#include <vector>
//using namespace std;
//
//int trap(vector<int>& height) {
//	int i = 0, j = 1,v=0,min_h;
//	while (i < j && j < height.size())
//	{
//		int column = 0;
//		if (height[j] >= height[i]) { i++; j++; continue; }
//		min_h = height[j];
//		while (height[j+1]>min_h) 
//		{ 
//			column += height[j]; j++; 
//		}
//		if (j < height.size())
//		{
//			v += min(height[j], height[i]) * (j - i - 1) - column;
//			i = j;
//			j = i + 1;
//		}
//		else {
//			i = i + 1; j = i + 1;
//		}
//	}
//	return v;
//}
//
//int main()
//{
//	vector<int>height = { 4,2,3 };
//	cout << trap(height);
//	return 0;
//}