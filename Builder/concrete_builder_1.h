#ifndef CONCRETE_BUILDER_1_H
#define CONCRETE_BUILDER_1_H

#include "builder.h"
#include "product_1.h"

class ConcreteBuilder1 : public Builder
{
	public:
		ConcreteBuilder1();
		virtual ~ConcreteBuilder1();

		virtual void buildPartA();
		virtual void buildPartB();

		Product1 getResult();
	private:
		Product1 result_;
};

#endif // CONCRETE_BUILDER_1_H
