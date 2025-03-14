#include <iostream>

using namespace std;
#define SIZE 5 

int main() {
#pragma region 선택 정렬
	int list[SIZE] = { 5,4,6,2,1 };
	int temp = 0;
	int mininumber = 0;

	for (int i = 0; i < SIZE; i++) {

		mininumber = list[i];

		int index = i;

		//for (int j = i+1; j < SIZE; j++) {
		//
		//	if (list[i] <= list[j]) {
		//		temp = list[i];
		//		list[i] = list[j];
		//		list[j] = temp;
		//
		//	}
		//}
		for (int j = i + 1; j < SIZE; j++) {
			if (mininumber < list[j]) {

				mininumber = list[j];

				index = j;

			}
		}


	}

	for (int i = 0; i < SIZE; i++) {
		cout << list[i] << " ";
	}

#pragma endregion

	return 0;
}