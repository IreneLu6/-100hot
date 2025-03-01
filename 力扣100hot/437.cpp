#include<iostream>
using namespace std;
#include<vector>

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

int helper(TreeNode* root, int targetSum, int Sum, int& num,vector<int>& nums)
{
	if (root == NULL)return num;
	Sum = Sum + root->val;
	if (Sum < targetSum) {
		nums.push_back(root->val);
		helper(root->left, targetSum, Sum, num,nums);
		helper(root->right, targetSum, Sum, num,nums);
	}
	else {
		if (Sum== targetSum) num++;
		Sum -= nums[1]; nums.pop_back();
		helper(root->left, targetSum, Sum, num,nums);
		helper(root->right, targetSum, Sum, num,nums);
	}
	return num;
}


int pathSum(TreeNode* root, int targetSum) {
	int num = 0;
	vector<int>nums;
	return helper(root, targetSum, 0, num,nums);
}