#ifndef PRODUCT_1_H
#define PRODUCT_1_H

#include <string>

class Product1
{
	public:
		Product1();
		virtual ~Product1();

		void addPart(std::string part);
		std::string getPartString();
	
	private:
		std::string part_string_;
};

#endif // PRODUCT_1_H
