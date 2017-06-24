#include <iostream>
#include "concrete_builder_2.h"

ConcreteBuilder2::ConcreteBuilder2()
{
	std::cout << "ConcreteBuilder2 is being constructed!" << std::endl;
}

ConcreteBuilder2::~ConcreteBuilder2()
{
	std::cout << "ConcreteBuilder2 is being destructed!" << std::endl;
}

void ConcreteBuilder2::buildPartA()
{
	std::cout << "ConcreteBuilder2 is building PartA!" << std::endl;
	result_.addPart("part a");
}

void ConcreteBuilder2::buildPartB()
{
	std::cout << "ConcreteBuilder2 is building PartB!" << std::endl;
	result_.addPart("part b");
}

Product2 ConcreteBuilder2::getResult()
{
	return result_;
}
