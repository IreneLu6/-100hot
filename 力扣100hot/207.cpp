#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<queue>

//是拓扑排序我们有救了
bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
	vector<int> nums_of_posterior(numCourses, 0); // 显式初始化为全0
	queue<int> topo;
	map<int, vector<int>> post_mapping_table;

	// 构建映射表和入度数组
	for (const auto& prereq : prerequisites) {
		post_mapping_table[prereq[1]].push_back(prereq[0]);
		nums_of_posterior[prereq[0]]++; // 注意这里是prereq[0]，因为prereq[0]是依赖于prereq[1]的课程
	}

	// 将所有入度为0的课程加入队列
	for (int i = 0; i < numCourses; i++) {
		if (nums_of_posterior[i] == 0) topo.push(i);
	}

	int count = 0; // 计数器，记录已经排序的课程数量
	while (!topo.empty()) {
		int course = topo.front();
		topo.pop();
		count++; // 每处理一个课程，计数器加1

		// 遍历所有依赖于当前课程的课程，减少它们的入度
		if (post_mapping_table.find(course) != post_mapping_table.end()) {
			for (int next_course : post_mapping_table[course]) {
				nums_of_posterior[next_course]--;
				if (nums_of_posterior[next_course] == 0) {
					topo.push(next_course);
				}
			}
		}
	}

	// 如果所有课程都被排序了，返回true，否则返回false
	return count == numCourses;
}











	//map<int, vector<int>> post_mapping_table;
	//vector<int> lesons;
	//lesons.resize(numCourses);//看哪些课程没有入度
	//queue<int> Topology;
	//for (int i = 0; i < prerequisites.size(); i++)
	//{
	//	if (post_mapping_table.count(prerequisites[i][1]))post_mapping_table[prerequisites[i][1]].push_back(prerequisites[i][0]);
	//	else post_mapping_table.insert({ prerequisites[i][1],{prerequisites[i][0]} });
	//	lesons[prerequisites[i][0]] = 1;//有入度的=1；
	//}//把后置映射表初始化，<课程，后置课程>
	//for (int i = 0; i < lesons.size(); i++)
	//{
	//	if (lesons[i] != 1)	Topology.push(lesons[i]);//没有入度的都放进Topo里；
	//}

	//while (!Topology.empty() && numCourses)
	//{
	//	int que_len = Topology.size();
	//	for (int i = 0; i < que_len; i++)
	//	{
	//		int tmp = Topology.front();
	//		Topology.pop();//弹出队头元素
	//		//删除队头元素所对应的每一个
	//		numCourses--;
	//	}



		//vector <vector<int>> lesons_after;
		//vector<int> lesons;lesons.resize(numCourses);//看哪些课程没有入度
		//queue<int> Topology;
		//for (int i = 0; i < prerequisites.size(); i++) { 
		//	lesons_after[prerequisites[i][1]].push_back({ prerequisites[i][0] });
		//	lesons[prerequisites[i][0]] = 1;//有入度的=1；
		//}

		//for (int i = 0; i < lesons.size(); i++)
		//{
		//	if (lesons[i] != 1)	Topology.push(lesons[i]);//没有入读的都放进Topo里；
		//}

		//while (!Topology.empty()&&numCourses)
		//{
		//	int que_len = Topology.size();
		//	for (int i = 0; i < que_len; i++)
		//	{
		//		int tmp = Topology.front();
		//		Topology.pop();
		//		for (int j = 0; j < prerequisites.size(); j++)
		//		{
		//			prerequisites[j].find(tmp);
		//		}
		//		numCourses--;
		//	}
		//}


//}