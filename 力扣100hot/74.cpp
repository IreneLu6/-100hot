//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//bool searchMatrix(vector<vector<int>>& matrix, int target) {
//	int n = matrix.size() - 1, m = matrix[0].size() - 1;
//	int left = 0, right = n, mid = (left + right) / 2;
//	while (left < right)
//	{
//		if (target > matrix[mid][m]) {
//			left = mid + 1;
//		}
//		else if (target < matrix[mid][m] && target < matrix[mid][0]) {
//			right = mid - 1;
//		}
//		else break;
//		mid = (left + right) / 2;
//	}
//	int row = mid;
//	left = 0, right = m, mid = (left + right) / 2;
//	while (left < right)
//	{
//		if (matrix[row][mid] > target) {
//			right = mid - 1;
//		}
//		else if (matrix[row][mid] < target) {
//			left = mid + 1;
//		}
//		else return true;
//		mid = (left + right) / 2;
//	}
//	if (matrix[row][mid] == target)return true;
//	return false;
//}
//
//int main()
//{
//	vector<vector<int>>matrix = { {1,3,5,7 }, { 10,11,16,20 }, { 23,30,34,50 } };
//    int target = 10;
//	searchMatrix(matrix, target);
//}