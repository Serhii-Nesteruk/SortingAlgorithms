#pragma once

#include <iostream>
#include <cstdlib>
#include <iomanip>

#define sizeArr 20

namespace Utils
{
	template <class T>
	void print(T(&arr)[sizeArr]) 
	{
		for (int i = 0; i < sizeArr; ++i)
			std::cout << std::setw(3) << arr[i];
		std::cout << std::endl;
	}

	template <class T>
	void randArrayInit(T(&arr)[sizeArr], T maxNumber)
	{
		srand(time(nullptr));
		for (int i = 0; i < sizeArr; ++i)
			arr[i] = rand() % maxNumber;
	}
}