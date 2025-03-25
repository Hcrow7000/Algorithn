#include <iostream>
using namespace std;

#define SIZE 100001

int Fibonacci(int n[])
{
	if (n <= 0) 
	{
		return 0;

	}
	else if (n <= 2)
	{
		return 1;
	}
	
	return Fibonacci(n - 1) + Fibonacci(n - 2);

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


	cout << Fibonacci(1) << endl;

	

#pragma endregion 
	
	return 0;

}