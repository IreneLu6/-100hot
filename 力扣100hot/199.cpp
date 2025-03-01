//#include<iostream>
//using namespace std;
//#include<vector>
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode() : val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
//
//void everyLevel(TreeNode* root, int level, vector<int>& res) // 使用引用传递
//{
//    if (root == NULL) return;
//    // 确保res有足够的空间来存储当前层的节点值
//    if (level > res.size())//因为要用level来resize,这里的是数量而不是下标，所以下标要用level-1.
//	{
//		res.resize(level);
//		res[level - 1] = root->val;
//	}
//    everyLevel(root->right, level + 1, res);
//	everyLevel(root->left, level + 1, res);
//}
//
//
//vector<int> rightSideView(TreeNode* root) {
//	vector<int> res;
//	everyLevel(root, 1, res); // 从1开始遍历，1代表第1层--数组0号下标
//	return res;
//}