//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
//vector<int> spiralOrder(vector<vector<int>>& matrix) {
//	vector<int> S_O;
//	int n = matrix.size(), m = matrix[0].size();
//	int i = 0, j = 0,t=0;
//	while (m != 0&&n!=0)
//	{
//		while (j < m-t)
//		{
//			S_O.push_back(matrix[i][j]);//00 01 02
//			j++;
//		}
//		j--; i++;
//		while (i < n-t)
//		{
//			S_O.push_back(matrix[i][j]);//12 22
//			i++;
//		}
//		i--; j--;
//		while (j > m - (m - t))
//		{
//			S_O.push_back(matrix[i][j]);//21 20
//			j--;
//		}
//		j++; i--;
//		while (i > n-(n-t))
//		{
//			S_O.push_back(matrix[i][j]);
//			i--;
//		}
//		m--;
//		n--;
//		t++;
//	}
//	return S_O;
//}
//
//
//int main()
//{
//	vector<vector<int>> mat = { {1, 2, 3},{4, 5, 6},{7, 8, 9} };
//	spiralOrder(mat);
//	return 0;
//	return 0;
//}