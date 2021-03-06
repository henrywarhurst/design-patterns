#include <iostream>
#include "concrete_builder_1.h"

ConcreteBuilder1::ConcreteBuilder1()
{
	std::cout << "ConcreteBuilder1 is being constructed!" << std::endl;
}

ConcreteBuilder1::~ConcreteBuilder1()
{
	std::cout << "ConcreteBuilder1 is being destructed!" << std::endl;
}

void ConcreteBuilder1::buildPartA()
{
	std::cout << "ConcreteBuilder1 is building PartA!" << std::endl;
	result_.addPart("part a");
}

void ConcreteBuilder1::buildPartB()
{
	std::cout << "ConcreteBuilder1 is building PartB!" << std::endl;
	result_.addPart("part b");
}

Product1 ConcreteBuilder1::getResult()
{
	return result_;
}
