#include <iostream>
#include "concrete_prototype_1.h"

ConcretePrototype1::ConcretePrototype1()
{
	std::cout << "ConcretePrototype1 was constructed!" << std::endl;
}

ConcretePrototype1::~ConcretePrototype1()
{
	std::cout << "ConcretePrototype1 was destructed!" << std::endl;
}

Prototype* ConcretePrototype1::clone()
{
	ConcretePrototype1 *tmp = new ConcretePrototype1;
	tmp->setMemberVariable(some_member_);	
	return tmp;
}

int ConcretePrototype1::getMemberVariable()
{
	return some_member_;
}

void ConcretePrototype1::setMemberVariable(int new_val)
{
	some_member_ = new_val;
}
