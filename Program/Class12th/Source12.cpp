#include <iostream>
using namespace std;

#define SIZE 8

void combine(int list[], int start, int middle, int end)
{
	int count = 0;
	int left = start;
	int right = middle + 1;

	int* container = new int[end - start + 1];

	// �� �κ��� �迭�� �����մϴ�.

	while (left <= middle && right <= end)
	{
		if (list[left] <= list[right])
		{
			container[count++] = list[left++];

		}
		else
		{
			container[count++] = list[right++];
		}

	}

	while (right <= end)
	{
		container[count++] = list[right++];
	}

	for (int i = 0; i < end - start + 1; i++)
	{
		list[start + i] = container[i];
	}

	delete[] container;

}

int merge_sort(int list[], int start, int end)
{
	if (start < end) {
		int middle = (start + end) / 2;

		merge_sort(list, start, middle);
		merge_sort(list, middle + 1, end);

		combine(list, start, middle, end);

	}




}



int main()
{
#pragma region ���� ����
	// �ϳ��� ����Ʈ�� �� ���� ������ ũ��� �����ϰ� ���ҵ�
	// �κ� ����Ʈ�� ������ ����, �� ���� ���ĵ� �κ� ����Ʈ��
	// ���Ͽ� ��ü�� ���ĵ� ����Ʈ�� �ǰ� �ϴ� ����Դϴ�.

	// 1. ����Ʈ�� ���̰� 0 �Ǵ� 1�̸� �̹� ���ĵ� ������ ���ϴ�.

	// 2. �׷��� �������

	// 2-1. ���ĵ��� ���� ����Ʈ�� �������� �߶� ����� ũ����
	// �κκ� ����Ʈ�� �����ϴ�.

	// 2-2 �� �κ� ����Ʈ�� ��������� ���� ������ �̿��Ͽ� �����մϴ�.

	// 2-3. �� �κ� ����Ʈ�� �ٽ� �ϳ��� ���ĵ� ����Ʈ�� �����մϴ�.

	int list[SIZE] = { 3,5,2,7,4,1,6,8 };


	merge_sort(list, 0, SIZE - 1);

	for (const int& element : list)
	{
		cout << element << " ";
	}

#pragma endregion 

	return 0;

}