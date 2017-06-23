#include <iostream>
#include "concrete_factory_a.h"
#include "product_a_type_1.h"
#include "product_b_type_1.h"

ConcreteFactoryA::ConcreteFactoryA()
{
	std::cout << "ConcreteFactoryA constructor called!" << std::endl;
}

ConcreteFactoryA::~ConcreteFactoryA()
{
	std::cout << "ConcreteFactoryA destructor called!" << std::endl;
}

void ConcreteFactoryA::createProductA()
{
	ProductAType1 tmp;
}

void ConcreteFactoryA::createProductB()
{
	ProductBType1 tmp;
}
