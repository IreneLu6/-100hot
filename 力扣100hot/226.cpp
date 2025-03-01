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
//TreeNode* invertTree(TreeNode* root) {
//	if (root == NULL) return NULL;
//	if (root->left == NULL && root->right == NULL)return root;//这一步是关键！
//	TreeNode* tmp = root->left;
//	root->left = invertTree(root->right);
//	root->right = invertTree(tmp);
//	return root;
//}