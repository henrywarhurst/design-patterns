#include <iostream>
#include <string>
#include "product_2.h"

Product2::Product2()
{
	std::cout << "Product2 was created!" << std::endl;
}

Product2::~Product2()
{
	std::cout << "Product2 was destroyed!" << std::endl;
}

void Product2::addPart(std::string part)
{
	part_string_ = part_string_ + " " + part;
}

std::string Product2::getPartString()
{
	return part_string_;
}
