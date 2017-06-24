#include <iostream>
#include "product.h"
#include "product_a.h"
#include "product_a_creator.h"

ProductACreator::ProductACreator()
{
	std::cout << "ProductACreator was constructed!" << std::endl;
}

ProductACreator::~ProductACreator()
{
	std::cout << "ProductACreator was destructed!" << std::endl;
}

Product ProductACreator::factoryMethod()
{
	ProductA productA;
	return productA;
}
