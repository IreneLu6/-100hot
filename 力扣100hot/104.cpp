//#include<iostream>
//using namespace std;
//
//
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode() : val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
//
//
//
//
//int maxDepth(TreeNode* root) {
//	if (root == NULL)return 1;
//	return max(maxDepth(root->left)+1, maxDepth(root->right)+1);
//}