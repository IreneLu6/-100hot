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
//ListNode* swapPairs(ListNode* head) {
//    ListNode* dummyHead = new ListNode(0);
//    dummyHead->next = head;
//    ListNode* temp = dummyHead;
//    while (temp->next != nullptr && temp->next->next != nullptr) {
//        ListNode* node1 = temp->next;
//        ListNode* node2 = temp->next->next;
//        temp->next = node2;
//        node1->next = node2->next;
//        node2->next = node1;
//        temp = node1;
//    }
//    ListNode* ans = dummyHead->next;
//    delete dummyHead;
//    return ans;
//}
//
//int main()
//{
//	ListNode d(4, NULL), c(3, &d), b(2, &c), a(1, &b);
//	swapPairs(&a);
//	return 1;
//}