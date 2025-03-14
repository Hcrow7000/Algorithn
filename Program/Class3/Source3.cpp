#include <iostream>

using namespace std;

#define SIZE

int main() {
#pragma region 거품 정렬
	int Size[SIZE] = { 13,8,97,1,36 };

	int temp = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (Size[i] <= Size[j]) {
				temp = Size[i];
				Size[i] = Size[j];
				Size[j] = temp;
			}
		}
	}
	//cout << "Size : " << Size[0] << " " << Size[1] << " " << Size[2] << " " << Size[3] << " " << Size[4] << endl;
	for (int i = 0; i < 5; i++) {
		cout << Size[i] << " ";
	}

#pragma endregion

#pragma region 


#pragma endregion

	return 0;
}