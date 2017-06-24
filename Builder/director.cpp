#include <iostream>
#include <string>
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

	ConcreteBuilder1 builder1;
	builder1.buildPartA();
	builder1.buildPartB();
	Product1 product1 = builder1.getResult();
	std::string product1Str = product1.getPartString();
	std::cout << "Product 1 looks like: " << product1Str << std::endl;

	ConcreteBuilder2 builder2;
	builder2.buildPartA();
	builder2.buildPartB();
	Product2 product2 = builder2.getResult();
	std::string product2Str = product2.getPartString();
	std::cout << "Product 2 looks like: " << product2Str << std::endl;
}
