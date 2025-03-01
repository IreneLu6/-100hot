//#include<iostream>
//using namespace std;
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
//int deepOfBinaryTree(TreeNode* root)
//{
//	if (root == NULL)return 0;
//	return max(deepOfBinaryTree(root->left) + 1, deepOfBinaryTree(root->right) + 1);
//}
//
//
//int diameterOfBinaryTree(TreeNode* root) {
//	if (root == NULL)return 0;
//	int diameter1 = deepOfBinaryTree(root->left) + deepOfBinaryTree(root->right);
//	diameter1 = max(diameterOfBinaryTree(root->left), diameter1);
//	return max(diameterOfBinaryTree(root->right), diameter1);
//}
//
//
//int main()
//{
//
//}