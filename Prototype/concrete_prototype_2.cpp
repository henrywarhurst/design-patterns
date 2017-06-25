#include <iostream>
#include "concrete_prototype_2.h"

ConcretePrototype2::ConcretePrototype2()
{
	std::cout << "ConcretePrototype2 was constructed!" << std::endl;
}

ConcretePrototype2::~ConcretePrototype2()
{
	std::cout << "ConcretePrototype2 was destructed!" << std::endl;
}

Prototype* ConcretePrototype2::clone()
{
	ConcretePrototype2 *tmp = new ConcretePrototype2;
	tmp->setMemberVariable(some_member_);	
	return tmp;
}

int ConcretePrototype2::getMemberVariable()
{
	return some_member_;
}

void ConcretePrototype2::setMemberVariable(int new_val)
{
	some_member_ = new_val;
}
