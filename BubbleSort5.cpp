#include "Utils.inl"

#include <iostream>
#include <iomanip>

using namespace std;

template <Utils::isNumber T>
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