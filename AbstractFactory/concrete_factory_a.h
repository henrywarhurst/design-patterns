#ifndef CONCRETE_FACTORY_A_H
#define CONCRETE_FACTORY_A_H

#include "abstract_factory.h"

class ConcreteFactoryA : public AbstractFactory
{
	public:
		ConcreteFactoryA();
		virtual ~ConcreteFactoryA();
	
		virtual void createProductA();
		virtual void createProductB();

};

#endif // CONCRETE_FACTORY_A_H
