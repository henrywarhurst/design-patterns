#include <iostream>
#include "concrete_subject.h"

ConcreteSubject::ConcreteSubject()
	: subject_state_(0)
{
	std::cout << "ConcreteSubject constructed!" << std::endl;
}

ConcreteSubject::~ConcreteSubject()
{
	std::cout << "ConcreteSubject destructed!" << std::endl;
}

int ConcreteSubject::getState()
{
	std::cout << "ConcreteSubject::getState()" << std::endl;
	return subject_state_;
}

void ConcreteSubject::setState(int new_state)
{
	std::cout << "ConcreteSubject::setState()" << std::endl;
	subject_state_ = new_state;
	notify();
}
