#include "../Utils/Utils.inl"

using namespace std;

template <Utils::isNumber T>
void sort_(T(&arr1)[sizeArr], T(&arr2)[sizeArr], int i_p, int i_k) {
		int i_s = 0, i1 = 0, i2 = 0, i = 0;

		i_s = (i_p + i_k + 1) / 2;
		if (i_s - i_p > 1) sort_(arr1, arr2, i_p, i_s - 1);
		if (i_k - i_s > 0) sort_(arr1, arr2, i_s, i_k);
		i1 = i_p; i2 = i_s;
		for (i = i_p; i <= i_k; i++)
			arr2[i] = ((i1 == i_s) || ((i2 <= i_k) && (arr1[i1] > arr1[i2]))) ? arr1[i2++] : arr1[i1++];
		for (i = i_p; i <= i_k; i++) arr1[i] = arr2[i];
}

int main() {
	int arr1[sizeArr]{};
	int arr2[sizeArr]{};
	Utils::randArrayInit(arr1, 100);
	Utils::randArrayInit(arr2, 100);

	cout << "Arr1 Before sorting: " << endl;
	Utils::print(arr1);
	cout << "Arr2 Before sorting: " << endl;
	Utils::print(arr2);

	sort_(arr1, arr2, 0, sizeArr - 1);

	cout << "Merge arr After sorting: " << endl;
	Utils::print(arr1);

	system("pause");

	return 0;
}