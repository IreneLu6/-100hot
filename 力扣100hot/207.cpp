#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<queue>

//���������������о���
bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
	vector<int> nums_of_posterior(numCourses, 0); // ��ʽ��ʼ��Ϊȫ0
	queue<int> topo;
	map<int, vector<int>> post_mapping_table;

	// ����ӳ�����������
	for (const auto& prereq : prerequisites) {
		post_mapping_table[prereq[1]].push_back(prereq[0]);
		nums_of_posterior[prereq[0]]++; // ע��������prereq[0]����Ϊprereq[0]��������prereq[1]�Ŀγ�
	}

	// ���������Ϊ0�Ŀγ̼������
	for (int i = 0; i < numCourses; i++) {
		if (nums_of_posterior[i] == 0) topo.push(i);
	}

	int count = 0; // ����������¼�Ѿ�����Ŀγ�����
	while (!topo.empty()) {
		int course = topo.front();
		topo.pop();
		count++; // ÿ����һ���γ̣���������1

		// �������������ڵ�ǰ�γ̵Ŀγ̣��������ǵ����
		if (post_mapping_table.find(course) != post_mapping_table.end()) {
			for (int next_course : post_mapping_table[course]) {
				nums_of_posterior[next_course]--;
				if (nums_of_posterior[next_course] == 0) {
					topo.push(next_course);
				}
			}
		}
	}

	// ������пγ̶��������ˣ�����true�����򷵻�false
	return count == numCourses;
}











	//map<int, vector<int>> post_mapping_table;
	//vector<int> lesons;
	//lesons.resize(numCourses);//����Щ�γ�û�����
	//queue<int> Topology;
	//for (int i = 0; i < prerequisites.size(); i++)
	//{
	//	if (post_mapping_table.count(prerequisites[i][1]))post_mapping_table[prerequisites[i][1]].push_back(prerequisites[i][0]);
	//	else post_mapping_table.insert({ prerequisites[i][1],{prerequisites[i][0]} });
	//	lesons[prerequisites[i][0]] = 1;//����ȵ�=1��
	//}//�Ѻ���ӳ����ʼ����<�γ̣����ÿγ�>
	//for (int i = 0; i < lesons.size(); i++)
	//{
	//	if (lesons[i] != 1)	Topology.push(lesons[i]);//û����ȵĶ��Ž�Topo�
	//}

	//while (!Topology.empty() && numCourses)
	//{
	//	int que_len = Topology.size();
	//	for (int i = 0; i < que_len; i++)
	//	{
	//		int tmp = Topology.front();
	//		Topology.pop();//������ͷԪ��
	//		//ɾ����ͷԪ������Ӧ��ÿһ��
	//		numCourses--;
	//	}



		//vector <vector<int>> lesons_after;
		//vector<int> lesons;lesons.resize(numCourses);//����Щ�γ�û�����
		//queue<int> Topology;
		//for (int i = 0; i < prerequisites.size(); i++) { 
		//	lesons_after[prerequisites[i][1]].push_back({ prerequisites[i][0] });
		//	lesons[prerequisites[i][0]] = 1;//����ȵ�=1��
		//}

		//for (int i = 0; i < lesons.size(); i++)
		//{
		//	if (lesons[i] != 1)	Topology.push(lesons[i]);//û������Ķ��Ž�Topo�
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