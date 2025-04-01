#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define SIZE 6

int parent[SIZE];

// Root Node�� ã�� �Լ�

// �迭�� �ε����� ���� ���ٸ� Root Node �߰�

// �θ� ����� ��ȣ�� �����ϸ鼭, Root Node�� 
// ã�� ������ ��� ȣ���� �ݺ��մϴ�.

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

}

int main() 
{
#pragma region ���Ͽ� ���ε�
	// ���� ��尡 ������ �� � ��尡 �ٸ� ����
	// ����Ǿ� �ִ� �� Ȯ���ϴ� �˰��� �Դϴ�.
	
	// Union : Ư���� �� ���� ��带 ���� �������� ��ġ�� �����Դϴ�.

	// Find : Ư���� ��尡 ��� ���տ� �ִ� �� Ȯ���ϴ� �����Դϴ�.
	
	for (int i = 0; i < SIZE; i++)
	{
		parent[i] = i;

	}

#pragma endregion 
	
	return 0;

}