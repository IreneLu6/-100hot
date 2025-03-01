//#include<iostream>
//using namespace std;
//#include<unordered_set>
//
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//
//
//bool hasCycle(ListNode* head) {
//	unordered_set<ListNode*> seen;
//	while (head != nullptr) {
//		if (seen.count(head)) {
//			return true;
//		}
//		seen.insert(head);
//		head = head->next;
//	}
//	return false;
//}
