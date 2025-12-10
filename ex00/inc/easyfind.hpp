#pragma once
#include <iostream>
#include <algorithm>
#include <stdexcept>

template<typename T>
typename T::iterator easyfind(T& container, int val){
	typename T::iterator it = std::find(container.begin(), container.end(), val);
	if (it == container.end())
	{
		throw std::runtime_error("Can't find this integer's occurrence!");
	}
	return it;
}