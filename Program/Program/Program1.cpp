#include <iostream>

using namespace std;

int main() {

#pragma region ¿ÏÀü Å½»ö
	int PassWord[] = { 7,1,2 };

	//PassWord[0] = 700;
	//PassWord[1] = 10;
	//PassWord[2] = 2;
	//for (int i = 0; i < 10; i++) {
	//	if(PassWord[])
	//	printf("%d\n%d\n%d\n", PassWord[0], PassWord[1], PassWord[2]);
	//
	//}
	int i = 0;
	int j = 0;
	int k = 0;

	while (true) {
		if (i != PassWord[0]) {
			i++;
		}
		if (j != PassWord[1]) {
			j++;
		}
		if (k != PassWord[2]) {
			k++;
		}
		if (i== PassWord[0]&& j==PassWord[1] && k==PassWord[2]) {
			cout << "PassWord : " << i << " " << j << " " << k << endl;
			break;
		}
	}


#pragma endregion


	return 0;
}