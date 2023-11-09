#include "../Utils/Utils.inl"

using namespace std;
template <Utils::isNumber T>
void selection(T(&arr)[sizeArr])
{
	int pmin = 0;
	for (int i = 0; i < sizeArr - 1; ++i)
	{
		pmin = i;
		for (int j = i + 1; j < sizeArr; ++j)
			if (arr[j] < arr[pmin])
				pmin = j;
		swap(arr[pmin], arr[i]);
	}
}

int main() {
	int arr[sizeArr]{};

	Utils::randArrayInit(arr, 100);

	cout << "Before: " << endl;
	Utils::print(arr);

	selection(arr);

	cout << "After: " << endl;
	Utils::print(arr);

	system("pause");

	return 0;
}