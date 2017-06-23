#ifndef CONCRETE_BUILDER_1_H
#define CONCRETE_BUILDER_1_H

#include "builder.h"

class ConcreteBuilder1 : public Builder
{
	public:
		ConcreteBuilder1();
		virtual ~ConcreteBuilder1();

		virtual void buildPartA();
		virtual void buildPartB();

};

#endif // CONCRETE_BUILDER_1_H
