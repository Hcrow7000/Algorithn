#include <iostream>
using namespace std;

int euclid(int x, int y) {
	// 1. 두개의 자연수 x,y가 있습니다.
	//    그리고 x와 y로 나눈 나머지를 R이라고 한다.

	// 2 .R이 0 이면 x와 y의 최대공약수 y가 됩니다.

	// 3. R이 0이 아니라면 x와 y의 최대 공약수는 y와R의
	//	  최대 공약수와 같기 때문에 x에는 y 그리고 y에는 R을
	//	  대입한 후 1번으로 돌아간다.
	if (y == 0) {
		return x;

	}
	else {
		return euclid(y, x % y);
	}
}

int main() {
#pragma region 유클리드 호제법

	int a = 100;
	int b = 20;
	cout << euclid(a, b) << endl;

#pragma endregion

	return 0;

}