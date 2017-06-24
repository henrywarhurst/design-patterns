#ifndef PRODUCT_2_H
#define PRODUCT_2_H

#include <string>

class Product2
{
	public:
		Product2();
		virtual ~Product2();

		void addPart(std::string part);
		std::string getPartString();
	
	private:
		std::string part_string_;
};

#endif // PRODUCT_2_H
