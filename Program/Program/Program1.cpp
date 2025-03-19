#include <iostream>
using namespace std;

#define SIZE 4

int Find(int list[], int left, int right) 
{
	if (left == right) {
		return list[left];
	}
	else 
	{
		int leftMax = Find(list, left, (left + right) / 2);
		int rightMax = Find(list, (left + right) / 2 + 1, right);

		if (leftMax < rightMax) {
			return rightMax;
		}
		else {
			return leftMax;
		}

	}

}

int main() 
{
#pragma region 분할 정복
	//분할 (Divide) : 주어진 문제를 두개 혹은 그 이상의 형식으로 나눈다.

	//정복 (Conquer) :나누어진 문제를 재귀적으로 해결해서 나누어진 문제를
	// 더 이상 나누어서 문제가 필요없을 때까지 계속 분할합니다.

	//통합 (Combine) : 나누어서 해결한 문제들을 통합해서 원래 문제의 해답을 생성합니다.

	int list[SIZE] = { 20,15,99,1 };

	int size = sizeof(list) / sizeof(int);


	cout << Find(list, 0, size - 1);

#pragma endregion 
	
	return 0;

}