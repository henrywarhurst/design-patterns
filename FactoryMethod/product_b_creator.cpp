#include <iostream>
#include "product.h"
#include "product_b.h"
#include "product_b_creator.h"

ProductBCreator::ProductBCreator()
{
	std::cout << "ProductBCreator was constructed!" << std::endl;
}

ProductBCreator::~ProductBCreator()
{
	std::cout << "ProductBCreator was destructed!" << std::endl;
}

Product ProductBCreator::factoryMethod()
{
	ProductB productB;
	return productB;
}
