#include <iostream>
using namespace std;

bool isPrime(int n) {
	if (n <= 1) {
		return false;
	}

	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

void sieve(int n) {
	int* container = new int[n + 1];

	for (int i = 0; i <= n; i++) {
		container[i] = i;
	}

	for (int i = 2; i <= sqrt(n); i++) {
		if (container[i] == 0) {
			continue;
		}
	}
	for (int i = 2; i <= n; i++) {
		if (container[i] != 0) {
			cout << container[i] << " ";
		}
	}

	delete[] container;
}

int main() {
#pragma region ¼Ò¼ö	



	//scanf_s("%d", &n);
	//
	//if (n % 2 != 0 || n == 2) {
	//	cout << n << " " << "true" << endl;
	//}
	//else {
	//	cout << n << " " << "false" << endl;
	//}

	//cout << isPrime(11) << endl;
	sieve(16);

#pragma endregion

	return 0;

}