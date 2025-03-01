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
//
//ListNode* removeNthFromEnd(ListNode* head, int n) {
//	int m = 0;
//	ListNode* p = head,*s;
//	for (p; p != NULL; p = p->next)m++;
//	if (m == 1) {
//		return NULL;
//	}
//	if (m == n)
//	{
//		p = head;
//		head = p->next;
//		delete(p);
//		return head;
//	}
//	p = head;
//	for (int i = 1; i < m - n; i++)p = p->next;
//	s = p->next;
//	p->next = s->next;
//	delete(s);
//	return head;
//}