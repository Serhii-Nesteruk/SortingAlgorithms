#include <iostream>
#include <iomanip>

#define sizeArr 5

using namespace std;

template <class T>
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

template <class T>
void print(T (&arr)[sizeArr]) {
	for (int i = 0; i < sizeArr; ++i)
		cout << setw(3) << arr[i];
	cout << endl;
}

template <class T>
void randArrayInit(T(&arr)[sizeArr])
{
	for (int i = 0; i < sizeArr; ++i)
		arr[i] = rand() % 100 + 1;
}

int main() {
	int arr[sizeArr]{};

	srand(time(nullptr));

	randArrayInit(arr);

	cout << "Before: " << std::endl;
	print(arr);

	sort_(arr);

	cout << "After: " << std::endl;
	print(arr);

	system("pause");

	return 0;
}