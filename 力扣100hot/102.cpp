//#include<iostream>
//using namespace std;
//#include<vector>
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
//void everyLevel(TreeNode* root, int level, vector<vector<int>>& res) // 使用引用传递
//{
//    if (root == NULL) return; // 直接返回，避免空指针解引用
//    // 确保res有足够的空间来存储当前层的节点值
//    if(level > res.size()) res.resize(level); 
//    res[level - 1].push_back(root->val); // level从1开始，所以这里使用level - 1
//    everyLevel(root->left, level + 1, res);
//    everyLevel(root->right, level + 1, res);
//}
//
//vector<vector<int>> levelOrder(TreeNode* root) {
//    vector<vector<int>> res;
//    everyLevel(root, 1, res); // 从第1层开始遍历
//    return res;
//}