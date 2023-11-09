#include "../Utils/Utils.inl"

using namespace std;

template <Utils::isNumber T>
void quickSort(T(&arr)[sizeArr], int low, int high)
{
    if (low < high) 
    {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; ++j) 
            if (arr[j] <= pivot) 
            {
                ++i;
                std::swap(arr[i], arr[j]);
            }

        std::swap(arr[i + 1], arr[high]);
        quickSort(arr, low, i);
        quickSort(arr, i + 2, high);
    }
}

int main() 
{
	int arr[sizeArr]{};

	Utils::randArrayInit(arr, 100);

	cout << "Before: ";
	Utils::print(arr);

    quickSort(arr, 0, sizeArr - 1);

	cout << "After: ";
	Utils::print(arr);

    system("pause");

	return 0;
}