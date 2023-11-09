#include "../Utils/Utils.inl"

using namespace std;

void heapify(int arr[], int n, int i) {
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if (left < n && arr[left] > arr[largest])
		largest = left;

	if (right < n && arr[right] > arr[largest])
		largest = right;

	if (largest != i) {
		swap(arr[i], arr[largest]);
		heapify(arr, n, largest);
	}
}

template <Utils::isNumber T>
void heapSort(T(&arr)[sizeArr]) {
	for (int i = sizeArr / 2 - 1; i >= 0; i--)
		heapify(arr, sizeArr, i);

	for (int i = sizeArr - 1; i > 0; i--) {
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
	}
}

int main() {
	int arr[sizeArr]{};
	Utils::randArrayInit(arr, 100);

	cout << "Before sorting: " << endl;
	Utils::print(arr);

	heapSort(arr);

	cout << "After sorting: " << endl;
	Utils::print(arr);

	system("pause");

	return 0;
}