//#include<iostream>
//using namespace std;
//#include<vector>
//#include<unordered_map>
//
//class TrieNode
//{
//public:
//    unordered_map<char, TrieNode*>children;//ÿ���ڵ������26�����ӣ�26����ĸ����ÿ�����Ӷ���һ���ڵ�
//    bool isEnd;
//    //������˼���ǣ������õ��ǹ�ϣ��ӳ���ϵ��������ֱ����ÿ���ڵ��п��ٿռ��һ����ĸ
//    //�����Ļ��Ϳ������ù�ϣ������ֱ�Ӳ��ң������Ǳ���ÿһ�����ӽڵ��ˡ�
//    TrieNode() {
//        children.clear();
//        isEnd = false;
//    }
//};
//
//
//class Trie {
//private:
//    TrieNode* root;
//public:
//    Trie() {
//        root = new TrieNode();
//    }
//
//    void insert(string word) {
//        TrieNode* cur = root;
//        for (int i = 0; i < word.length(); i++)//���ʳ���
//        {
//            if (cur->children.count(word[i]) == 0)cur->children[word[i]] = new TrieNode();
//            //���û�������ĸ��Ӧ�ĺ��ӣ��Ǿ��½�һ��
//            cur = cur->children[word[i]];
//        }
//        cur->isEnd = true;//����ʾ������
//    }
//
//    bool search(string word) {
//        TrieNode* cur = root;
//        for (int i = 0; i < word.length(); i++)
//        {
//            if (cur->children.count(word[i] )== 0)return false;
//            cur = cur->children[word[i]];
//        }
//        return cur->isEnd;//���ǲ������һ�������ǵĻ��ͷ���false
//    }
//
//    bool startsWith(string prefix) {
//        TrieNode* cur = root;
//        for (int i = 0; i < prefix.length(); i++)
//        {
//            if (cur->children.count(prefix[i]) == 0)return false;
//            cur = cur->children[prefix[i]];
//        }
//        return true;
//    }
//};
