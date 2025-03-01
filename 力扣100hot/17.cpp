//#include<iostream>
//using namespace std;
//#include<vector>
//#include<unordered_map>
//
//vector<string> letterCombinations(string digits) {
//	vector<string> combinations; // 用于存储所有生成的字母组合
//	if (digits.empty()) {
//		return combinations; // 如果输入为空，直接返回空结果
//	}
//
//	// 电话号码到字母的映射表
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
//	string combination; // 用于存储当前生成的字母组合。而且！这个东西可以push_back！比如combination="a",combination.push_back("b")=="ab"!!
//	// 调用回溯函数开始生成组合
//	backtrack(combinations, phoneMap, digits, 0, combination);
//	return combinations;
//}
//
//
//// 回溯函数，用于生成所有可能的字母组合
//void backtrack(vector<string>& combinations, const unordered_map<char, string>& phoneMap, const string& digits, int index, string& combination) {
//	if (index == digits.length()) {
//		// 如果当前索引达到输入字符串的长度，说明已经生成了一个完整的组合
//		combinations.push_back(combination); // 将当前组合添加到结果集中
//	}
//	else {
//		char digit = digits[index]; // 获取当前数字
//		const string& letters = phoneMap.at(digit); // 获取当前数字对应的字母字符串
//		for (const char& letter : letters) {
//			combination.push_back(letter); // 将当前字母添加到当前组合中
//			backtrack(combinations, phoneMap, digits, index + 1, combination); // 递归生成下一个字母的组合
//			combination.pop_back(); // 回溯，移除最后一个添加的字母，尝试下一个字母
//		}
//	}
//}
////combinations:"",digits:"23"
