#include <iostream>
#include <string>
#include "product_1.h"

Product1::Product1()
{
	std::cout << "Product1 was created!" << std::endl;
}

Product1::~Product1()
{
	std::cout << "Product1 was destroyed!" << std::endl;
}

void Product1::addPart(std::string part)
{
	part_string_ = part_string_ + " " + part;
}

std::string Product1::getPartString()
{
	return part_string_;
}
