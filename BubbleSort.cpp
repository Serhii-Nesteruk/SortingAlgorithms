#include "Utils.inl"

#include <iostream>
#include <iomanip>

using namespace std;

template <Utils::isNumber T>
void sort_(T(&arr)[sizeArr]) {
	int i = 0;
	do
	{
		if (arr[i] > arr[i + 1] && i < sizeArr - 1)
		{
			swap(arr[i], arr[i + 1]);
			i = 0;
			continue;
		}
		++i;
	} while (i < sizeArr);
}

int main() {
	int arr[sizeArr]{};

	srand(time(nullptr));

	Utils::randArrayInit(arr, 100);

	cout << "Before: " << std::endl;
	Utils::print(arr);

	sort_(arr);

	cout << "After: " << std::endl;
	Utils::print(arr);

	system("pause");

	return 0;
}