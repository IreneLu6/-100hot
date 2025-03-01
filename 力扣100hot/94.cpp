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
//
//
//
//vector<int> inorderTraversal(TreeNode* root) {
//	vector<int> res,tmp;
//	if (root == NULL)return res;
//	tmp = inorderTraversal(root->left);
//	res.insert(res.end(),tmp.begin(),tmp.end());
//	res.push_back(root->val);
//	tmp = inorderTraversal(root->right);
//	res.insert(res.end(), tmp.begin(), tmp.end());
//	return res;
//}