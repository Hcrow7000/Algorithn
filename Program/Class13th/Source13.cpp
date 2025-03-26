#include <iostream>
using namespace std;

#define SIZE 100001

int Fibonacci(int n, int list[])
{
	if (n <= 0)
	{
		return 0;

	}
	else if (n <= 2)
	{
		return 1;
	}

	if (list[n] != 0)
	{
		return list[n];
	}

	return Fibonacci(n - 1, list) + Fibonacci(n - 2, list);

}


int main()
{
#pragma region ���� ��ȹ��
	// Ư�� ���������� ���� ���ϱ� ���� �װͰ�
	// �ٸ� ���������� ���� �̿��ؼ� ȿ�������� ����
	// ���ϴ� �˰����̴�.

	// (Overlapping Subproblems) ��ġ�� �κ� ����
	// ������ ���� �������� �ݺ��Ͽ� ��Ÿ���� ��츦 �ǹ��մϴ�.

	// (Optimal Substructure) ���� �κ� ����
	// �κ� ������ ���� ��� ���� ����Ͽ� ��ü ������ ����
	// ����� �� �� �ִ� ��츦 �ǹ��մϴ�.

	// �޸������̼� (Memoization)
	// ���α׷��� ������ ����� �ݺ��ؾ� �� ��, ������
	// ����� ���� �޸𸮿� ���������ν� ������ �����
	// �ݺ� �����ϴ� �۾��� �����Ͽ� ���α׷��� ����ӵ��� 
	// ����Ű�� ����Դϴ�.

	int list[SIZE] = { 0, };

	cout << Fibonacci(55, list) << endl;



#pragma endregion 

	return 0;

}