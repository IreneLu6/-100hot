#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

vector<int> findAnagrams(string s, string p) {
    vector<int> real(26, 0); // ��ʼ��Ϊ0
    vector<int> now(26, 0);  // ��ʼ��Ϊ0

    vector<int> ans;
    int plen = p.length();
    // ����Ŀ���ַ���p���ַ�Ƶ�ʱ�
    for (int i = 0; i < plen; i++) {
        real[p[i] - 'a']++;
    }

    int l = 0, r = 0;
    while (r < s.size())
    {
        if (r - l < plen) {
            now[s[r] - 'a']++;
            r++;
        }
        else 
        {
            if (now == real) ans.push_back(l);
            now[s[l] - 'a']--;
            l++;
        }
    }
    if (now == real) ans.push_back(l);
	return ans;
}

int main()
{
	string s = "abab";
	findAnagrams(s, "ab");
	return 0;
}