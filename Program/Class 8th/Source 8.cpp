#include <iostream>
using namespace std;

#define SIZE 10

int main() {
#pragma region ��� ����
	// �������� ���� ������ �ʰ� �� ���ҿ� �����Ͱ�
	// � �ִ� �� ������ ���� ������ ���� �����ϴ� �˰����Դϴ�.

	int array[SIZE] = { 1,1,3,1,2,3,4,4,2,5 };

	int count[5] = { 0, };

	for (int i = 0; i < SIZE; i++) {
		count[array[i] - 1]++;
	}

	for (int i = 0; i < 5; i++)
	{
		if (array[i] != 0)
		{
			for (int j = 0; j < count[i]; j++)
			{
				cout << i + 1 << " ";
			}
		}
	}


#pragma endregion

	return 0;

}