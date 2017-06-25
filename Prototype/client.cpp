#include <iostream>
#include "client.h"

Client::Client()
{
	std::cout << "Client has been constructed!" << std::endl;
}

Client::~Client()
{
	std::cout << "Client has been destructed!" << std::endl;
}

void Client::operation(Prototype *prototype)
{
	Prototype *prototype_clone = prototype->clone();
	
	std::cout << "The original prototype member was: ";
	std::cout << prototype->getMemberVariable() << std::endl;
	
	std::cout << "The cloned prototype member is: ";
	std::cout << prototype_clone->getMemberVariable() << std::endl;
	
	delete prototype_clone;
}
