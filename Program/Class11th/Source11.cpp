#include <iostream>
using namespace std;

#define SIZE 6

void QuickSort(int list[], int start, int end)
{

	if (start >= end) {
		return;
	}
	int pivot = start;

	int left = start + 1;

	int right = end;

	while (left <= right)
	{
		while (left <= end && list[pivot] >= list[left])
		{
			left++;
		}
		while (right > start && list[pivot] <= list[right])
		{
			right--;
		}

		if (left > right)
		{
			std::swap(list[pivot], list[right]);

		}
		else
		{
			std::swap(list[left], list[right]);
		}
	}

	QuickSort(list, start, right - 1);
	QuickSort(list, right + 1, end);

}

int main()
{
#pragma region �� ����
	// ��������ȹ���� ���� �������� �������� �迭�� ������ ���ʿ���
	// ���������� ���� ������ ��ġ�ϰ� �ϰ� �ٸ� ���ʿ��� ����������
	// ū ������ ��ġ�ϵ��� �����մϴ�

	// �������� ���� �迭�� ���� ��������� �� ������ ȣ���Ͽ�
	// ��� �迭�� �⺻ �迭�� �ɶ����� �ݺ��ϸ鼭 �����ϴ� �˰����Դϴ�.

	int list[SIZE] = { 1,4,3,2,5,6 };

	QuickSort(list, 0, SIZE - 1);

	for (int i = 0; i < SIZE; i++)
	{
		cout << list[i] << " ";
	}

#pragma endregion 

	return 0;

}