#ifndef CONCRETE_FACTORY_B_H
#define CONCRETE_FACTORY_B_H

#include "abstract_factory.h"

class ConcreteFactoryB : public AbstractFactory
{
	public:
		ConcreteFactoryB();
		virtual ~ConcreteFactoryB();
	
		virtual void createProductA();
		virtual void createProductB();

};

#endif // CONCRETE_FACTORY_B_H
