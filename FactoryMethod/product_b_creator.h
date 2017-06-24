#ifndef PRODUCT_B_CREATOR_H
#define PRODUCT_B_CREATOR_H

#include "creator.h"

class ProductBCreator : public Creator
{
	public:
		ProductBCreator();
		virtual ~ProductBCreator();

		virtual Product factoryMethod();
};

#endif // PRODUCT_B_CREATOR_H

