#include <iostream>
#include "singleton.h"

int main()
{
	// We test that the singleton data isn't being destroyed
	{
		Singleton *singleton = Singleton::getInstance();
		singleton->setMemberVariable(52);
		std::cout << "Singleton member variable is: ";
		std::cout << singleton->getMemberVariable();
		std::cout << std::endl;
	}

	{
		Singleton *singleton = Singleton::getInstance();
		std::cout << "Singleton member variable is now: ";
		std::cout << singleton->getMemberVariable();
		std::cout << std::endl;
	}

	return 0;
}
