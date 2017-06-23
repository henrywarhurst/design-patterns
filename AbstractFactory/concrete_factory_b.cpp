#include <iostream>
#include "concrete_factory_b.h"
#include "product_a_type_2.h"
#include "product_b_type_2.h"

ConcreteFactoryB::ConcreteFactoryB()
{
	std::cout << "ConcreteFactoryB constructor called!" << std::endl;
}

ConcreteFactoryB::~ConcreteFactoryB()
{
	std::cout << "ConcreteFactoryB destructor called!" << std::endl;
}

void ConcreteFactoryB::createProductA()
{
	ProductAType2 tmp;
}

void ConcreteFactoryB::createProductB()
{
	ProductBType2 tmp;
}
