#include "../Utils/Utils.inl"

using namespace std;

template <Utils::isNumber T>
void sort_(T (&arr)[sizeArr]) 
{
	int i = 0, x = 0;
	for (int j = sizeArr - 2; j >= 0; --j)
	{
		x = arr[j];
		i = j + 1;
		while ((i < sizeArr) && (x > arr[i]))
		{
			arr[i - 1] = arr[i];
			++i;
		}
		arr[i - 1] = x;
	}

}

int main() {
	int arr[sizeArr]{};

	Utils::randArrayInit(arr, 100);

	cout << "Before: ";
	Utils::print(arr);

	sort_(arr);

	cout << "After: ";
	Utils::print(arr);
	
	return 0;
}