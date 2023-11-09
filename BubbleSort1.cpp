#include "Utils.h"

#include <iostream>
#include <iomanip>

#define sizeArr 20

using namespace std;

template <class T>
void sort_(T (&arr)[sizeArr]) {
	for (int i = 0; i < sizeArr - 1; i++)
		for (int j = 0; j < sizeArr - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
}

int main() {
	int arr[sizeArr]{};
	Utils::randArrayInit(arr, 100);
	cout << "Before sotring: ";
	Utils::print(arr);

	sort_(arr);

	cout << "After sotring: ";
	Utils::print(arr);

	system("pause");

	return 0;
}