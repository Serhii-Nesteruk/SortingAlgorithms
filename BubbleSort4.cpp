#include "Utils.inl"

#include <iostream>
#include <iomanip>

using namespace std;

template <class T>
void sort_(T(&arr)[sizeArr]) {
	int pmin = 0, pmax = sizeArr - 1, p = -1;
	do
	{
		p = -1;
		for (int i = pmin; i < pmax; i++)
			if (arr[i] > arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
				if (p < 0) 
					pmin = i;
				p = i;
			}
		if (pmin) pmin--;
		pmax = p;
	} while (p >= 0);
}

int main() {
	int arr[sizeArr]{};
	Utils::randArrayInit(arr, 100);

	cout << "Before sorting: " << endl;
	Utils::print(arr);

	sort_(arr);

	cout << "After sorting: " << endl;
	Utils::print(arr);

	system("pause");

	return 0;
}