#ifndef CREATOR_H
#define CREATOR_H

#include "product.h"

class Creator
{
	public:
		Creator();
		virtual ~Creator();

		virtual Product factoryMethod() = 0;

		virtual void anOperation();
};

#endif // CREATOR_H
