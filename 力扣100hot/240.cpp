//#include<iostream>
//using namespace std;
//#include<vector>
//
//bool searchMatrix(vector<vector<int>>& matrix, int target) {
//	int n = matrix.size(),m=matrix[0].size();
//	int i = 0,j=0,p=0,q=0;
//	for (; i < matrix.size(); i++,j++)
//	{
//		if (matrix[i][j] < target)continue;
//	}
//	i--; j--;
//	while (i < n-1&&matrix[i][j]<target) {//ÐÐ
//		i++;
//	}
//	while (j < m-1 && matrix[i][j] < target) {//ÐÐ
//		j++;
//	}
//	p = i, q = j;
//	while (i >=0 && matrix[--i][q] > target)
//	{
//		i--;
//	}
//	while (j >= 0 && matrix[p][--j] > target)
//	{
//		j--;
//	}
//	for (int k = i; k < p; k++)
//	{
//		for (int s = j; s < q; s++)
//		{
//			if (matrix[k][s] == target)return true;
//		}
//	}
//	return false;
//}
//
//
//int main()
//{
//	vector<vector<int>> matrix = { {1, 4, 7, 11, 15},{2, 5, 8, 12, 19},{3, 6, 9, 16, 22},{10, 13, 14, 17, 24},{18, 21, 23, 26, 30} };
//	searchMatrix(matrix, 12);
//	return 0;
//}