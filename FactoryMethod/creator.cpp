#include <iostream>
#include "creator.h"
#include "product.h"

Creator::Creator()
{
	std::cout << "Creator was constructed!" << std::endl;
}

Creator::~Creator()
{
	std::cout << "Creator was destructed!" << std::endl;
}

void Creator::anOperation()
{
	// The type of this product depends on which
	// creator subclass anOperation was called on.
	Product product = factoryMethod();
}
