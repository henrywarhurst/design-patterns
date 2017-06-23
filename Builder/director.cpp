#include <iostream>
#include "director.h"
#include "concrete_builder_1.h"
#include "concrete_builder_2.h"

Director::Director()
{

}

Director::~Director()
{

}

void Director::construct()
{
	std::cout << "Inside the construct() method!" << std::endl;

	ConcreteBuilder1 builder;
	builder.buildPartA();
	builder.buildPartB();

	ConcreteBuilder2 builder2;
	builder2.buildPartA();
	builder2.buildPartB();
}
