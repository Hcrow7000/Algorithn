#include <iostream>
using namespace std;

#define SIZE 8

void binary_serach(int list[],int key )
{
	int left = 0;
	int right = SIZE - 1;
	
	while (left <= right)
	{
		int pivot = (left + right) / 2;

		if (list[pivot] == key) {
			cout << "Key Found : " << list[pivot] << endl;

			return;
		}
		else if (list[pivot] > key)
		{
			right = pivot - 1;
		}
		else
		{
			left = pivot + 1;
		}

	}

	cout << "Not Key Found" << endl;

}

int main() 
{
#pragma region ÀÌÁø Å½»ö
	
	int list[SIZE] = {5,6,11,13,27,55,66,99};

	binary_serach(list, 3);


#pragma endregion 
	
	return 0;

}