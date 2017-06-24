#include <iostream>
#include "product_a_creator.h"
#include "product_b_creator.h"

int main()
{
	ProductACreator productACreator;
	productACreator.anOperation();

	ProductBCreator productBCreator;
	productBCreator.anOperation();
}
