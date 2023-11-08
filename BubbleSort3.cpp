#include <iostream>
#include <iomanip>

#define sizeArr 20

using namespace std;

template <class T>
void print(T(&arr)[sizeArr]) {
	for (int i = 0; i < sizeArr; ++i)
		cout << setw(3) << arr[i];
	cout << endl;
}

template <class T>
void sort_(T(&arr)[sizeArr]) {
	for (int i = sizeArr - 1; i > 0; i--)
	{
		int p = 1;
		for (int j = 0; j < i; j++)
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				p = 0;
			}
		if (p) 
			break;
	}
}

template <class T>
void randArrayInit(T(&arr)[sizeArr], T maxNumber)
{
	srand(time(nullptr));
	for (int i = 0; i < sizeArr; ++i)
		arr[i] = rand() % maxNumber;
}

int main() {
	int arr[sizeArr]{};
	randArrayInit(arr, 100);

	cout << "Before sorting: " << endl;
	print(arr);

	sort_(arr);

	cout << "After sorting: " << endl;
	print(arr);

	system("pause");

	return 0;
}