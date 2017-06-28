#include <iostream>
#include "concrete_observer_b.h"

ConcreteObserverB::ConcreteObserverB(ConcreteSubject *subject, std::string key)
	: subject_(subject),	
	  observer_state_(0),
	  key_(key)
{
	std::cout << "ConcreteObserverB constructed!" << std::endl;	
}

ConcreteObserverB::~ConcreteObserverB()
{
	std::cout << "ConcreteObserverB destructed!" << std::endl;
}

void ConcreteObserverB::update()
{
	std::cout << "ConcreteObserverB::update() called!" << std::endl;	
	observer_state_ = subject_->getState();	
	std::cout << "ConcreteObserverB::observer_state_ is now: ";
	std::cout << observer_state_ << std::endl;
}

std::string ConcreteObserverB::getKey()
{
	return key_;
}
