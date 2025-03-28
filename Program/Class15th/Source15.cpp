#include <iostream>
#include <vector>

using namespace std;

#define SIZE 8

class Node
{
private:
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
		visited[start] = true;

		cout << start << " ";

		for (int i = 0; i < adjacencyList[start].size(); i++)
		{
			int next = adjacencyList[start][i];

			if (visited[next] == false)
			{
				search(next);
			}
		}
	};

};


int main()
{
#pragma region ���� �켱 Ž��
	// root ��忡������ ���� �б�� �Ѿ�� ����
   // �ش� �б⸦ �Ϻ��ϰ� Ž���ϴ� ����Դϴ�.

   // ���� �켱 Ž���� ������ Ȱ���մϴ�.

   // 1. ���� ��带 ���ÿ� �ְ� �湮 ó���� �մϴ�.

   // 2. ������ �ֻ�� ��忡 �湮���� ���� ���� ��尡
   //    ������ �� ��带 ���ÿ� �ְ� �湮 ó���մϴ�.  

   // 3. �湮���� ���� ���� ��尡 ������ ���ÿ��� �ֻ�� 
   //    �� �ִ� ��带 �����ϴ�.

   // 4. �� �̻� 2���� ������ ������ �� ���� ������ �ݺ��մϴ�.

	Node node;

	node.insert(1, 2);
	node.insert(1, 3);

	node.insert(2, 3);
	node.insert(2, 4);
	node.insert(2, 5);

	node.insert(3, 6);
	node.insert(3, 7);

	node.insert(4, 5);
	node.insert(6, 7);

	node.search(1);

#pragma endregion 

	return 0;

}