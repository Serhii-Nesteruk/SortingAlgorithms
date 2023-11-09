#include "../Utils/Utils.inl"

using namespace std;

template <Utils::isNumber T>
void bubbleSort3(T(&arr)[sizeArr]) {
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

int main() {
	int arr[sizeArr]{};
	Utils::randArrayInit(arr, 100);

	cout << "Before sorting: " << endl;
	Utils::print(arr);

	bubbleSort3(arr);

	cout << "After sorting: " << endl;
	Utils::print(arr);

	system("pause");

	return 0;
}