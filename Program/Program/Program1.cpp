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

	const int& Find()
	{
	
	}

	void calculate(int start)
	{
		
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


	dijkctra.calculate(1);






	cout << "distance : " << << endl;
#pragma endregion 
	
	return 0;

}