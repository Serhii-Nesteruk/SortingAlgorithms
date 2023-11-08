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
    int pmin = 0, pmax = sizeArr - 2, p = -1;
    do
    {
        p = -1;
        for (int i = pmin; i <= pmax; i++)
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                p = i;
            }
        if (p < 0) break;
        pmax = p - 1;
        p = -1;
        for (int i = pmax; i >= pmin; i--)
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                p = i;
            }
        pmin = p + 1;
    } while (p >= 0);

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