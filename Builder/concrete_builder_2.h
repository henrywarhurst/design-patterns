#ifndef CONCRETE_BUILDER_2_H
#define CONCRETE_BUILDER_2_H

#include "builder.h"

class ConcreteBuilder2 : public Builder
{
	public:
		ConcreteBuilder2();
		virtual ~ConcreteBuilder2();

		virtual void buildPartA();
		virtual void buildPartB();

};

#endif // CONCRETE_BUILDER_2_H
