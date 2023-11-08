#include <iostream>
#include <iomanip>

#define sizeArr 20

using namespace std;

template <class T>
void print(T (&arr)[sizeArr]) {
	for (int i = 0; i < sizeArr; ++i)
		cout << setw(3) << arr[i];
	cout << endl;
}

template <class T>
void sort_(T (&arr)[sizeArr]) {
	for (int i = 0; i < sizeArr - 1; i++)
		for (int j = 0; j < sizeArr - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
}

template <class T>
void randArrayInit(T (&arr)[sizeArr], T maxNumber)
{
	srand(time(nullptr));
	for (int i = 0; i < sizeArr; ++i)
		arr[i] = rand() % maxNumber;
}

int main() {
	int arr[sizeArr]{};
	randArrayInit(arr, 100);
	cout << "Before sotring: ";
	print(arr);

	sort_(arr);

	cout << "After sotring: ";
	print(arr);

	system("pause");

	return 0;
}