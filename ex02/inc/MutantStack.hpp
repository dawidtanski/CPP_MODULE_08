#pragma once

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>{
public:

	MutantStack();
	MutantStack(MutantStack const &other);
	MutantStack &operator=(MutantStack const &other);
	~MutantStack();
	
	// container_type is like public API to Container in Stack
	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() { return this->c.begin(); }
    iterator end()   { return this->c.end(); }
};