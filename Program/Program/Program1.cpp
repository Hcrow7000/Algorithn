#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define SIZE 8

class Node
{
private:
	queue<int> queue;

	bool visited[SIZE];
	vector<int> adjacencyList[SIZE];
public:
	Node() 
	{
		for (int i = 0; i < SIZE; i++)
		{
			visited[i] = false;
		}
	}

	void insert(int i, int j)
	{
		adjacencyList[i].push_back(j);
		adjacencyList[j].push_back(i);
	}

	void search(int start)
	{
		queue.push(start);

		visited[start] = true;

		while (queue.empty() == false)
		{
			int x = queue.front();

			queue.pop();

			cout << x << " ";

			for (int i = 0; i < adjacencyList[x].size(); i++)
			{
				int next = adjacencyList[x][i];

				if (visited[next] == false)
				{
					queue.push(next);

					visited[next] = true;
				}
			}
		}
	}


};


int main() 
{
#pragma region �ʺ� �켱 Ž�� (Breadth Fisrt Search)
		// ���� ������ �湮�� �� ���� ������ ������
		// ��� �������� �켱 �湮�ϴ� ����Դϴ�.

		// �� �̻� �湮���� ���� ������ ���� ������ �湮���� ����
		// ��� �����鿡 ���ؼ��� �ʺ� �켱 Ž���� �����մϴ�.

	Node node;

	node.insert(1, 2);
	node.insert(1, 3);

	node.insert(2, 4);
	node.insert(2, 5);

	node.insert(3, 6);
	node.insert(3, 7);

	node.search(1);

#pragma endregion 
	
	return 0;

}