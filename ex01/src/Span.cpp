#include "../inc/Span.hpp"

Span::~Span(){
}

Span::Span(unsigned int N) : _N(N){
}

Span::Span(const Span& other):_N(other._N), _container(other._container){
}

Span& Span::operator=(const Span& other){
	if(this!= &other){
		_N = other._N;
		_container = other._container;
	}
	return *this;
}

void Span::addNumber(int num){
	if (_container.size() >= _N)
	{
		throw std::runtime_error("Container size cannot be bigger than N");
		return ;
	}
	_container.push_back(num);
}

int Span::shortestSpan(){
	if (_container.size() < 2)
		throw std::runtime_error("Not enough elements");
	std::vector<int> sorted = _container;
	std::sort(sorted.begin(), sorted.end());

	int span = sorted[1] - sorted[0];
	for(size_t i = 0; i < sorted.size() - 1; i++){
		if ((sorted[i+1] - sorted[i]) < span)
			span = (sorted[i+1] - sorted[i]);
	}
	return span;
}

int Span::longestSpan(){
	if (_container.size() < 2)
		throw std::runtime_error("Not enough elements");
	std::vector<int>::iterator min = std::min_element(_container.begin(), _container.end());
	std::vector<int>::iterator max = std::max_element(_container.begin(), _container.end());
	// std::vector<int>::iterator it = _container.begin();
	// int min = *it;
	// int max = *it;

	// for(int i = 0; i < _container.size(); i++){
	// 	if (_container[i] > max)
	// 		max = _container[i];
	// 	else if (_container[i] < min)
	// 		min = _container[i];
	// }
	return (*max - *min);
}
