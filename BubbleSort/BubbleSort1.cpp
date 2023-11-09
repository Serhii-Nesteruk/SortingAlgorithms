#include "../Utils/Utils.inl"

using namespace std;

template <Utils::isNumber T>
void bubbleSort1(T (&arr)[sizeArr]) {
	for (int i = 0; i < sizeArr - 1; i++)
		for (int j = 0; j < sizeArr - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
}

int main() {
	int arr[sizeArr]{};
	Utils::randArrayInit(arr, 100);
	cout << "Before sotring: ";
	Utils::print(arr);

	bubbleSort1(arr);

	cout << "After sotring: ";
	Utils::print(arr);

	system("pause");

	return 0;
}