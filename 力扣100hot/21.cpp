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
//ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//	ListNode* p=list1, * q = list2,*res,*tmp;
//	if (p == NULL) { res = q; return res; }
//	if (q == NULL) { res = p; return res; }
//	if (p->val < q->val)
//	{
//		res = p; tmp = p;
//		p = p->next;
//	}
//	else
//	{
//		res = q; tmp = q;
//		q = q->next;
//	}
//	while (1)
//	{
//		if (p == NULL)
//		{
//			tmp->next = q; break;
//		}
//		else if (q == NULL)
//		{
//			tmp->next = p; break;
//		}
//		else if (p->val < q->val)
//		{
//			tmp->next = p;
//			p = p->next;
//			tmp = tmp->next;
//		}
//		else
//		{
//			tmp->next = q;
//			q = q->next;
//			tmp = tmp->next;
//		}
//	}
//	return res;
//}
//
//int main()
//{
//	ListNode a(4, NULL), b(3 , &a),c(1,&b),d(4,NULL),e(2,&d),f(1,&e);
//	mergeTwoLists(&c, &f);
//
//	return 0;
//}