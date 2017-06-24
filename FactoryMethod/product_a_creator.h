#ifndef PRODUCT_A_CREATOR_H
#define PRODUCT_A_CREATOR_H

#include "creator.h"

class ProductACreator : public Creator
{
	public:
		ProductACreator();
		virtual ~ProductACreator();

		virtual Product factoryMethod();
};

#endif // PRODUCT_A_CREATOR_H

