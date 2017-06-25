#include <iostream>
#include "concrete_prototype_1.h"
#include "concrete_prototype_2.h"
#include "client.h"

int main()
{
	ConcretePrototype1 *prototype1 = new ConcretePrototype1();;
	prototype1->setMemberVariable(5);

	ConcretePrototype2 *prototype2 = new ConcretePrototype2();
	prototype2->setMemberVariable(17);

	Client client;
	// Test that cloning works with ConcretePrototype1
	client.operation(prototype1);
	// Test that cloning works with ConcretePrototype2
	client.operation(prototype2);

	delete prototype1;
	delete prototype2;
	return 0;
}
