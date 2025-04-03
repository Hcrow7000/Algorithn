#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define SIZE 8

class Kruskal
{
private:
	class Edge
	{
	private:
		int vertexX;
		int vertexY;
		int weight;
	public:
		Edge(int vertexX,int vertexY,int weight)
		{
			this->vertexX = vertexX;
			this->vertexY = vertexY;
			this->weight = weight;

		}

		const int& VertexX() { return vertexX; }
		const int& VertexY() { return vertexY; }
		const int& Weight() { return weight; }

		const bool& operator < (const Edge& edge)
		{
			return weight < edge.weight;

		}

	};

	int cost;
	int parent[SIZE];	

	vector<Edge> nodeList;

public:
	Kruskal()
	{
		cost = 0;

		for (int i = 0; i < SIZE; i++)
		{
			parent[i] = i;
		}
	}
	
	int Find(int x)
	{
		if (x == parent[x])
		{
			return x;
		}
		else
		{
			return parent[x] = Find(parent[x]);
		}

	}

	void Union(int x, int y)
	{
		x = Find(x);
		y = Find(y);

		if (x == y) { return; }

		if (x < y)
		{
			parent[y] = x;
		}
		else
		{
			parent[x] = y;
		}
	}

	bool same(int x, int y)
	{
		return Find(x) == Find(y);
	}


	void insert(int  vertexX, int vertexY, int weight)
	{
		Edge edge(vertexX, vertexY, weight);
		
		nodeList.push_back(edge);

	}

	void calculate()
	{
		sort(nodeList.begin(), nodeList.end());

		for (int i = 0;i < nodeList.size();i++)
		{
			if (same(nodeList[i].VertexX(), nodeList[i].VertexY()) == false)
			{
				cost += nodeList[i].Weight();

				Union(nodeList[i].VertexX(), nodeList[i].VertexY());

			}
		}

		cout << "Cost : " << cost << endl;
 	}
};



int main() 
{
#pragma region �ּ� ���� Ʈ�� (MST,Minimum Spanning Tree)
	// �׷����� ��� ������ �����ϸ鼭 ����Ŭ�� �������� �ʴ�
	// �κ� �׷�����, �׷����� ��� ������ �ּ� ������� �����ϴ� Ʈ���Դϴ�.

	// �׷����� ������ ���� n���� ��, ������ ���� n-1�� �Դϴ�.

	Kruskal kruskal;

	kruskal.insert(1, 7, 10);
	kruskal.insert(4, 7, 14);
	
	kruskal.insert(1, 4, 30);
	kruskal.insert(2, 4, 25);

	kruskal.insert(1, 2, 64);
	kruskal.insert(1, 5, 19);

	kruskal.insert(5, 7, 73);
	kruskal.insert(2, 5, 61);

	kruskal.insert(5, 3, 22);
	kruskal.insert(5, 6, 48);
	kruskal.insert(3, 6, 36);
	
	kruskal.calculate();

#pragma endregion 
	
	return 0;

}