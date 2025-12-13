#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class Span{
	private:
	unsigned int _N;
	std::vector<int> _container;

	public:
	Span(unsigned int N);
	~Span();
	Span(const Span &other);
	Span& operator=(const Span &other);

	void addNumber(int num);
	int	shortestSpan();
	int longestSpan();

	template<typename Iterator>
	void	addRange(Iterator begin, Iterator end){
		size_t count = std::distance(begin,end);
		if (_container.size() + count > _N)
			throw std::runtime_error("Cannot add range: would exceed max size");
		if (_container.size() )
		_container.insert(_container.end(), begin.begin(), end.end());
	}
};