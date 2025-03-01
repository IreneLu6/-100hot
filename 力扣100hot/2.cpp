#include<iostream>
using namespace std;



struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

//ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//	ListNode* p = l1, * q = l2;
//	int tmp1, tmp2, c = 0, tmp_sum;
//
//	tmp1 = p->val; tmp2 = q->val;
//	tmp_sum = tmp1 + tmp2 + c;
//	if (tmp_sum >= 10)c = 1;
//	else c = 0;
//	ListNode* tmp_node = new ListNode(tmp_sum % 10);
//	ListNode* res = tmp_node,*tmp_node2=tmp_node;
//	p = p->next; q = q->next;
//
//	while (p != NULL || q != NULL)
//	{
//		if (p == NULL) { tmp1 = 0; q = q->next;}
//		else if (q == NULL) { tmp2 = 0; p = p->next; }
//		else {
//			tmp1 = p->val; tmp2 = q->val;
//			p = p->next;
//			q = q->next;
//		}
//		tmp_sum = tmp1 + tmp2 + c;
//		if (tmp_sum >= 10)c = 1;
//		else c = 0;
//		tmp_node = new ListNode(tmp_sum % 10);
//		tmp_node2->next = tmp_node;
//		tmp_node2 = tmp_node;
//	}
//	if (c)
//	{
//		tmp_node = new ListNode(1);
//		tmp_node2->next = tmp_node;
//		tmp_node2 = tmp_node;
//	}
//
//
//	return res;
//}

//ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//	int sum1=0,sum2=0,times;
//	for (ListNode* p = l1; p != NULL; p = p->next) { sum1 += times * p->val; times+=10; }
//}
