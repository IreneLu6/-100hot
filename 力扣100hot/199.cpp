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
//void everyLevel(TreeNode* root, int level, vector<int>& res) // ʹ�����ô���
//{
//    if (root == NULL) return;
//    // ȷ��res���㹻�Ŀռ����洢��ǰ��Ľڵ�ֵ
//    if (level > res.size())//��ΪҪ��level��resize,������������������±꣬�����±�Ҫ��level-1.
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
//	everyLevel(root, 1, res); // ��1��ʼ������1�����1��--����0���±�
//	return res;
//}