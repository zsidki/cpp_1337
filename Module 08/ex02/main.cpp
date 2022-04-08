#include "MutantStack.hpp"

int main(void)
{
	MutantStack<int> mystack;

	mystack.push(10);
	mystack.push(11);
	mystack.push(42);

	std::cout << "size: " << mystack.size() << std::endl;

	std::cout << mystack.top() << std::endl;

	mystack.pop();

	mystack.push(3);
	mystack.push(5);
	mystack.push(737);
	mystack.push(0);
	mystack.push(42);

	MutantStack<int>::iterator it = mystack.begin();
	MutantStack<int>::iterator ite = mystack.end();
	++it;
	--it;
	std::cout << "\niterate through stack:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "\n// Here shows the legacy of MutantStack from std::stack" << std::endl;

	std::stack<int> s(mystack);

	MutantStack<int> stack2(mystack);

	MutantStack<int>::iterator it2 = mystack.begin();
	MutantStack<int>::iterator ite2 = mystack.end();
    
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
}