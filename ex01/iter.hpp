#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *arr, int num, void f(const T &))
{
	for (int i = 0; num > i; i++)
		f(arr[i]);
}

template<typename T>
void printtemp(const T & x)
{
	std::cout << x << std::endl; 
	return; 
}

#endif