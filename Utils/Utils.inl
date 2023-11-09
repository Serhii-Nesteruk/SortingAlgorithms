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
		std::is_same<T, float>::value;
	//template <class T>
	//concept isNumber = requires(T t)
	//{
	//	{ std::remove_extent_t<T>{} } -> std::same_as<std::remove_extent_t<T>>;
	//	std::is_same(T double) ;
	//};

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
		srand(time(nullptr));
		for (int i = 0; i < sizeArr; ++i)
			arr[i] = rand() % maxNumber;
	}
}