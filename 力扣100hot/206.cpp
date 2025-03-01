//#include<iostream>
//using namespace std;
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
//
//ListNode* reverseList(ListNode* head) {
//	ListNode* q = head,*p = head->next,*s;
//	for (; p->next != NULL; p = p->next)
//	{
//		s = p->next;
//		p->next = q;
//		q = p;
//	}
//	head = p;
//	return head;
//}