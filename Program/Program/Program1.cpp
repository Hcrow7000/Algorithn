#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define SIZE 8

class Graph
{
private:
	int degree[SIZE];
	queue<int> queue;
	vector<int> adjacencyList[SIZE];
public:
	Graph()
	{
		for (int i = 0; i < SIZE; i++)
		{
			degree[i] = 0;

		}
	}
	void insert(int vertex, int edge)
	{
		adjacencyList[vertex].push_back(edge);

		degree[edge]++;

	}
	void sort(int start)
	{
		//�ݺ�
		for (int i = 1; i < SIZE; i++)
		{
			//��ü ��ĵ
			if (degree[i] == 0)
			{
				//ĭ �����
				queue.push(i);
				

				int x = queue.front();

				queue.pop();

				cout << x << " ";


			}
		}

	}

};



int main() 
{
#pragma region ���� ����
	// ���� �׷����� �����ϴ� �� �������� ���� ������ ��Ű��,
	// ��� ������ ���ʴ��  

	// ����Ŭ�� �߻��ϴ� ��� ���� ������ ������ �� 

	// DAG(Directed Acyclic Graph) : ����Ŭ�� �������� �ʴ� �׷���

	// �ð� ���⵵ : O(V + E)
	
	// ���� �����ϴ� ���

	// 1. ���� ������ 0�� ������ Queue�� �����մϴ�.

	// 2. Queue���� ���Ҹ� ���� ����� ��� ������ �����մϴ�.

	// 3. ���� ���� ���Ŀ� ���� ������ 0�� �� ������ Queue�� �����մϴ�.

	// 4. Queue�� ������� ������ 2�� ~ 3�� �۾��� �ݺ� �����մϴ�.

	Graph graph;

	graph.insert(1, 2);
	graph.insert(1, 5);

	graph.insert(2, 3);
	graph.insert(3, 4);

	graph.insert(4, 6);

	graph.insert(5, 6);
	graph.insert(6, 7);


#pragma endregion 
	
	return 0;

}