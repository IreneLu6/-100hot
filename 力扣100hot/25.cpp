//#include<iostream>
//using namespace std;
//
//
//
//
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode() : val(0), next(nullptr) {}
//	ListNode(int x) : val(x), next(nullptr) {}
//	ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//
//
//ListNode* reverseKGroup(ListNode* head, int k) {
//	ListNode* new_head = new ListNode(0, head), * l, * r, * tmp_l, * tmp_r, * tmp;
//	int k_tmp = k;
//	r = new_head;
//	while (1)
//	{
//		//循环
//		tmp = tmp_l;
//		for (int i = 0; i < k_tmp; i++) {
//			tmp = tmp->next; if (tmp == NULL)return new_head->next;
//		}//看有没有那么多个节点可以排序
//		tmp_l = r; l = r = tmp_l->next; tmp_r = l->next;
//		for (int i = 1; i < k_tmp; i++)
//		{
//			tmp_l->next = tmp_r;
//			r->next = tmp_r->next;
//			tmp_r->next = l;
//			l = tmp_r;
//			tmp_r = r->next;
//		}
//		tmp_l = r;
//	}
//	return new_head->next;
//}
//int main()
//{
//	ListNode f(5,NULL),d(4, &f), c(3, &d), b(2, &c), a(1, &b);
//	reverseKGroup(&a,2);
//	return 1;
//}