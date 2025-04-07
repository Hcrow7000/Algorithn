#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define SIZE 6
#define INFINITY 1000000

class Dijkctra
{
private:
	int node[SIZE][SIZE] =
	{
		{0,2,5,1,INFINITY,INFINITY},
		{2,0,3,2,INFINITY,INFINITY},
		{5,3,0,3,1,5},
		{1,2,3,0,1,INFINITY},
		{INFINITY,INFINITY,1,1,0,2},
		{INFINITY,INFINITY,5,INFINITY,2,0},
	};

	bool visited[SIZE];
	int distance[SIZE];

public:
	Dijkctra()
	{
		for (int i = 0; i < SIZE; i++)
		{
			visited[i] = false;
			distance[i] = 0;
		}
	}

	const int& find()
	{
		int index = 0;
		int min = INFINITY;

		for (int i = 0;i < SIZE;i++)
		{
			if (distance[i] < min && visited[i] == false)
			{
				min = distance[i];

				index = i;

			}
		}

		return index;
	}

	void calculate(int start)
	{
		for (int i = 0;i < SIZE; i++)
		{
			distance[i] = node[start][i];
		}

		visited[start] = true;

		for (int i = 0;i < SIZE - 1;i++)
		{
			int minNode = find();

			visited[minNode] = true;

			for (int j = 0;j < SIZE;j++)
			{
				if (visited[j] == false)
				{
					if (distance[minNode] + node[minNode][j] < distance[j])
					{
						distance[j] = distance[minNode] + node[minNode][j];
					}
				}
			}


		}

		for (int i = 0;i < SIZE;i++)
		{
			cout << distance[i] << " ";
		}

	}
};

int main()
{
#pragma region ���ͽ�Ʈ�� �˰���
	// ���������κ��� ��� ��������
	// �ּҰŸ��� �����ִ� �˰����Դϴ�.

	// 1. �Ÿ��迭�� weight[���۳��]��
	// ����� �ʱ�ȭ�մϴ�.

	// 2. �������� �湮 ó���մϴ�.

	// 3. �Ÿ� �迭���� �ּ� ��� ��带 ã�� �湮 ó����.
	// ��, �̹� �湮�� ���� ����

	// 4. �ּ� ��� ��带 ���İ��� ����ؼ� �Ÿ� �迭�� ������
	// ��, �̹� �湮�� ���� ����

	// 5. ��� ��带 �湮�� ������ 3��~4���� �ݺ���

	// �湮���� ���� ��� �߿��� ���� ���� �Ÿ��� ���� 
	// ��带 �湮, �� ���� ����� �ٸ� �������� �Ÿ��� �����.

	Dijkctra dijkctra;


	dijkctra.calculate(0);

#pragma endregion 

	return 0;

}