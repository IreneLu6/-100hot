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
//void everyLevel(TreeNode* root, int level, vector<vector<int>>& res) // ʹ�����ô���
//{
//    if (root == NULL) return; // ֱ�ӷ��أ������ָ�������
//    // ȷ��res���㹻�Ŀռ����洢��ǰ��Ľڵ�ֵ
//    if(level > res.size()) res.resize(level); 
//    res[level - 1].push_back(root->val); // level��1��ʼ����������ʹ��level - 1
//    everyLevel(root->left, level + 1, res);
//    everyLevel(root->right, level + 1, res);
//}
//
//vector<vector<int>> levelOrder(TreeNode* root) {
//    vector<vector<int>> res;
//    everyLevel(root, 1, res); // �ӵ�1�㿪ʼ����
//    return res;
//}