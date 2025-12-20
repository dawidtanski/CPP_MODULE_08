#include "../inc/MutantStack.hpp"
#include <list>

int main()
{
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);

}
std::cout << "--------------------------------------------" << std::endl;
std::cout << "Comparing MutantStack output with list's one" << std::endl;
std::cout << "--------------------------------------------" << std::endl;
{
	std::list<int> list1;
	list1.push_back(5);
	list1.push_back(17);
	std::cout << list1.back() << std::endl;
	list1.pop_back();
	std::cout << list1.size() << std::endl;
	list1.push_back(3);
	list1.push_back(5);
	list1.push_back(737);
	//[...]
	list1.push_back(0);
	std::list<int>::iterator it = list1.begin();
	std::list<int>::iterator ite = list1.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
}
return 0;
}