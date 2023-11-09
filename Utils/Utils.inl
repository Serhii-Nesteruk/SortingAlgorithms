#pragma once

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <type_traits>

#define sizeArr 20

namespace Utils
{
	template <class T>
	concept isNumber = std::is_same<T, int>::value || std::is_same<T, double>::value ||
		std::is_same<T, float>::value;//

	template <isNumber T>
	void print(T(&arr)[sizeArr]) 
	{
		for (int i = 0; i < sizeArr; ++i)
			std::cout << std::setw(3) << arr[i];
		std::cout << std::endl;
	}

	template <isNumber T>
	void randArrayInit(T(&arr)[sizeArr], int maxNumber)
	{
		srand(static_cast<unsigned int>(time(nullptr)));
		for (int i = 0; i < sizeArr; ++i)
			arr[i] = rand() % maxNumber;
	}
}