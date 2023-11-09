#include "Utils.inl"

#include <iostream>
#include <iomanip>

using namespace std;

template <class T>
void sort_(T(&arr)[sizeArr]) {
	for (int i = sizeArr - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
}

int main() {
	int arr[sizeArr]{};

	Utils::randArrayInit(arr, 100);

	cout << "Befor sorting: ";
	Utils::print(arr);

	sort_(arr);

	cout << "After sorting: ";
	Utils::print(arr);

	system("pause");

	return 0;
}