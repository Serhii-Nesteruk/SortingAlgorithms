#include "../Utils/Utils.inl"

using namespace std;

template <Utils::isNumber T>
void sort_(T(&arr)[sizeArr]) {
    for (int gap = sizeArr / 2; gap > 0; gap /= 2) 
    {
        for (int i = gap; i < sizeArr; i++) 
        {
            int temp = arr[i];
            int j = i;

            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j -= gap;
            }

            arr[j] = temp;
        }
    }
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