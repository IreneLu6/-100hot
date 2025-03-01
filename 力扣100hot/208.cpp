//#include<iostream>
//using namespace std;
//#include<vector>
//#include<unordered_map>
//
//class TrieNode
//{
//public:
//    unordered_map<char, TrieNode*>children;//每个节点可能有26个孩子（26个字母），每个孩子都是一个节点
//    bool isEnd;
//    //很有意思的是，这里用的是哈希的映射关系，而不是直接在每个节点中开辟空间存一个字母
//    //这样的话就可以利用哈希的特性直接查找，而不是遍历每一个孩子节点了。
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
//        for (int i = 0; i < word.length(); i++)//单词长度
//        {
//            if (cur->children.count(word[i]) == 0)cur->children[word[i]] = new TrieNode();
//            //如果没有这个字母对应的孩子，那就新建一个
//            cur = cur->children[word[i]];
//        }
//        cur->isEnd = true;//最后表示结束。
//    }
//
//    bool search(string word) {
//        TrieNode* cur = root;
//        for (int i = 0; i < word.length(); i++)
//        {
//            if (cur->children.count(word[i] )== 0)return false;
//            cur = cur->children[word[i]];
//        }
//        return cur->isEnd;//看是不是最后一个，不是的话就返回false
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
