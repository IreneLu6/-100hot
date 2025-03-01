//#include<iostream>
//using namespace std;
//#include<unordered_map>
////class LRUNode {
////public:    
////    int key;
////    int num;
////    LRUNode* next;
////};
//
//
//class LRUCache {
//public:
//	int capacity;
//	int nums;
//	//LRUNode* head;
//	unordered_map <int, int> table;
//	LRUCache() {}
//	LRUCache(int capacity) {
//		this->capacity = capacity;
//	}
//
//	int get(int key) {
//		auto it = table.find(key);
//		if (it != table.end())
//		{
//			int a = it->first, b = it->second;
//			table.erase(it);
//			table.emplace(a, b);
//			return b;
//		}
//		else return -1;
//
//
//
//	}
//
//	void put(int key, int value) {
//		if (table.size() == capacity) {
//			table.erase(table.begin());
//		}
//		auto it = table.find(key);
//		if (it != table.end()) {
//			table.erase(it); table.insert({ key,value });
//		}
//		else table.insert({ key,value });
//	}
//};
//
//
//
//int main()
//{
//	LRUCache LRU;
//	LRU.capacity = 2;
//	LRU.put(1, 1);
//	for (auto it = LRU.table.begin(); it != LRU.table.end(); it++)
//	{
//		cout << it->first << " " << it->second << endl;
//	}
//	cout << endl;
//	LRU.put(2, 2);
//	for (auto it = LRU.table.begin(); it != LRU.table.end(); it++)
//	{
//		cout << it->first << " " << it->second << endl;
//	}
//	cout << endl;
//	LRU.get(1);
//	for (auto it = LRU.table.begin(); it != LRU.table.end(); it++)
//	{
//		cout << it->first << " " << it->second << endl;
//	}
//	cout << endl;
//	LRU.put(3, 3);
//	for (auto it = LRU.table.begin(); it != LRU.table.end(); it++)
//	{
//		cout << it->first << " " << it->second << endl;
//	}
//	cout << endl;
//	LRU.get(2);
//	for (auto it = LRU.table.begin(); it != LRU.table.end(); it++)
//	{
//		cout << it->first << " " << it->second << endl;
//	}
//	cout << endl;
//	LRU.put(4, 4);
//	for (auto it = LRU.table.begin(); it != LRU.table.end(); it++)
//	{
//		cout << it->first << " " << it->second << endl;
//	}
//	cout << endl;
//	LRU.get(1);
//	for (auto it = LRU.table.begin(); it != LRU.table.end(); it++)
//	{
//		cout << it->first << " " << it->second << endl;
//	}
//	cout << endl;
//	LRU.get(3);
//	for (auto it = LRU.table.begin(); it != LRU.table.end(); it++)
//	{
//		cout << it->first << " " << it->second << endl;
//	}
//	cout << endl;
//	LRU.get(4);
//	for (auto it = LRU.table.begin(); it != LRU.table.end(); it++)
//	{
//		cout << it->first << " " << it->second << endl;
//	}
//	cout << endl;
//	return 0;
//}