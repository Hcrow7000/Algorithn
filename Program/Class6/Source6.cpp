#include <iostream>
using namespace std;

int euclid(int x, int y) {
	// 1. �ΰ��� �ڿ��� x,y�� �ֽ��ϴ�.
	//    �׸��� x�� y�� ���� �������� R�̶�� �Ѵ�.

	// 2 .R�� 0 �̸� x�� y�� �ִ����� y�� �˴ϴ�.

	// 3. R�� 0�� �ƴ϶�� x�� y�� �ִ� ������� y��R��
	//	  �ִ� ������� ���� ������ x���� y �׸��� y���� R��
	//	  ������ �� 1������ ���ư���.
	if (y == 0) {
		return x;

	}
	else {
		return euclid(y, x % y);
	}
}

int main() {
#pragma region ��Ŭ���� ȣ����

	int a = 100;
	int b = 20;
	cout << euclid(a, b) << endl;

#pragma endregion

	return 0;

}