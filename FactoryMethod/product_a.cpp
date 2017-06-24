#include <iostream>
#include "product_a.h"

ProductA::ProductA()
{
	std::cout << "ProductA constructed!" << std::endl;
}

ProductA::~ProductA()
{
	std::cout << "ProductA destructed!" << std::endl;
}
