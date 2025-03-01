//#include<iostream>
//using namespace std;
//#include<vector>
//#include<unordered_map>
//
//vector<string> letterCombinations(string digits) {
//	vector<string> combinations; // ���ڴ洢�������ɵ���ĸ���
//	if (digits.empty()) {
//		return combinations; // �������Ϊ�գ�ֱ�ӷ��ؿս��
//	}
//
//	// �绰���뵽��ĸ��ӳ���
//	unordered_map<char, string> phoneMap{
//		{'2', "abc"},
//		{'3', "def"},
//		{'4', "ghi"},
//		{'5', "jkl"},
//		{'6', "mno"},
//		{'7', "pqrs"},
//		{'8', "tuv"},
//		{'9', "wxyz"}
//	};
//	
//	string combination; // ���ڴ洢��ǰ���ɵ���ĸ��ϡ����ң������������push_back������combination="a",combination.push_back("b")=="ab"!!
//	// ���û��ݺ�����ʼ�������
//	backtrack(combinations, phoneMap, digits, 0, combination);
//	return combinations;
//}
//
//
//// ���ݺ����������������п��ܵ���ĸ���
//void backtrack(vector<string>& combinations, const unordered_map<char, string>& phoneMap, const string& digits, int index, string& combination) {
//	if (index == digits.length()) {
//		// �����ǰ�����ﵽ�����ַ����ĳ��ȣ�˵���Ѿ�������һ�����������
//		combinations.push_back(combination); // ����ǰ�����ӵ��������
//	}
//	else {
//		char digit = digits[index]; // ��ȡ��ǰ����
//		const string& letters = phoneMap.at(digit); // ��ȡ��ǰ���ֶ�Ӧ����ĸ�ַ���
//		for (const char& letter : letters) {
//			combination.push_back(letter); // ����ǰ��ĸ��ӵ���ǰ�����
//			backtrack(combinations, phoneMap, digits, index + 1, combination); // �ݹ�������һ����ĸ�����
//			combination.pop_back(); // ���ݣ��Ƴ����һ����ӵ���ĸ��������һ����ĸ
//		}
//	}
//}
////combinations:"",digits:"23"
