#ifndef CONCRETE_BUILDER_2_H
#define CONCRETE_BUILDER_2_H

#include "builder.h"
#include "product_2.h"

class ConcreteBuilder2 : public Builder
{
	public:
		ConcreteBuilder2();
		virtual ~ConcreteBuilder2();

		virtual void buildPartA();
		virtual void buildPartB();

		Product2 getResult();

	private:
		Product2 result_;

};

#endif // CONCRETE_BUILDER_2_H
