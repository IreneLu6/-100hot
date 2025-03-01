//#include<iostream>
//using namespace std;
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
//bool isPalindrome(ListNode* head) {
//	ListNode* p, * q, * s = NULL;
//	int n = 0, b,t;
//	for (q = head; q != NULL; q = q->next) { n++; }
//	b = n % 2; t = n / 2;
//
//	p = head;
//	while (t) {
//		q = p->next;
//		p->next = s;
//		s = p;
//		p = q;
//		t--;
//	}
//	if (b)
//	{
//		p = p->next;
//	}
//	t = n / 2;
//	while (t)
//	{
//		if (p->val != s->val)return false;
//		p = p->next;
//		s = s->next;
//		t--;
//	}
//	return true;
//}