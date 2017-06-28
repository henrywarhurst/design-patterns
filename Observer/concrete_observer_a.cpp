#include <iostream>
#include "concrete_observer_a.h"

ConcreteObserverA::ConcreteObserverA(ConcreteSubject *subject, std::string key)
	: subject_(subject),	
	  observer_state_(0),
	  key_(key)
{
	std::cout << "ConcreteObserverA constructed!" << std::endl;	
}

ConcreteObserverA::~ConcreteObserverA()
{
	std::cout << "ConcreteObserverA destructed!" << std::endl;
}

void ConcreteObserverA::update()
{
	std::cout << "ConcreteObserverA::update() called!" << std::endl;	
	observer_state_ = subject_->getState();	
	std::cout << "ConcreteObserverA::observer_state_ is now: ";
	std::cout << observer_state_ << std::endl;
}

std::string ConcreteObserverA::getKey()
{
	return key_;
}
