//#include<iostream>
//using namespace std;
//#include<vector>
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
//void inorder_traversal(TreeNode* root,vector<int> &nums)
//{
//	if (root != NULL)
//	{
//		inorder_traversal(root->left, nums);
//		nums.push_back(root->val);
//		inorder_traversal(root->right, nums);
//	}
//}
//
//
//int kthSmallest(TreeNode* root, int k) {
//	vector<int> res;
//	inorder_traversal(root, res);
//	return res[k];
//}