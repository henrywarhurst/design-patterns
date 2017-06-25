#include <iostream>
#include "singleton.h"

Singleton* Singleton::instance = 0;

Singleton* Singleton::getInstance()
{
	if (instance == 0){
		instance = new Singleton();
	}

	return instance;
}

Singleton::Singleton()
	: some_member_(0)
{

}

Singleton::~Singleton()
{
	std::cout << "Singleton has been destructed!" << std::endl;
	delete instance;
}

void Singleton::setMemberVariable(int new_val)
{
	some_member_ = new_val;
}

int Singleton::getMemberVariable()
{
	return some_member_;
}
