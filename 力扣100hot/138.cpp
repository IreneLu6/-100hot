//#include<iostream>
//using namespace std;
//#include<unordered_map>
//
//class Node {
//public:
//	int val;
//	Node* next;
//	Node* random;
//
//	Node(int _val) {
//		val = _val;
//		next = NULL;
//		random = NULL;
//	}
//};
//
//
//Node* copyRandomList(Node* head) {
//    Node* tmp1, * tmp2, * head2, * tmp3;
//    if (head == NULL) {
//        head2 = NULL; return head2;
//    }
//    if (head->next == NULL) {
//        head2 = new Node(head->val);
//        if (head->random != NULL)head2->random = head2;
//        return head2;
//    }
//
//    unordered_map<Node*, Node*> reflect_table;
//
//
//
//    Node* new_Node = new Node(head->val);
//    tmp1 = new_Node;
//    head2 = tmp1;
//    reflect_table.insert({ head,head2 });
//    for (tmp2 = head->next; tmp2 != NULL; tmp2 = tmp2->next)
//    {
//        new_Node = new Node(tmp2->val);//创建新的节点
//        reflect_table.insert({ tmp2, new_Node });
//        tmp1->next = new_Node;//连起来
//        tmp1 = tmp1->next;
//    }
//
//    tmp1 = head2;
//    tmp2 = head;
//    while (tmp2 != NULL)
//    {
//        if (tmp2->random != NULL)
//        {
//            tmp1->random = reflect_table[tmp2->random];
//        }
//        tmp1 = tmp1->next;
//        tmp2 = tmp2->next;
//    }
//    return head2;
//}
//
//int main()
//{
//	//[[7, null], [13, 0], [11, 4], [10, 2], [1, 0]]
//	Node a(7), b(13), c(11), d(10), e(1);
//	a.next = &b; b.next = &c; c.next = &d; d.next = &e;
//	a.random = NULL;
//	b.random = &a;
//	e.random = &a;
//	c.random = &e;
//	d.random = &b;
//	copyRandomList(&a);
//	return 0;
//}