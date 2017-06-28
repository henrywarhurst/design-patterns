#include <iostream>
#include "subject.h"
#include "observer.h"

Subject::Subject()
{
	std::cout << "Subject has been constructed!" << std::endl;
}

Subject::~Subject()
{
	std::cout << "Subject has been destructed!" << std::endl;
}

void Subject::attach(Observer *observer)
{
	std::cout << "Subject::attach() called!" << std::endl;
	observers[observer->getKey()] = observer;	
}

void Subject::detach(Observer *observer)
{
	std::cout << "Subject::detach() called!" << std::endl;
	observers.erase(observer->getKey());
}

void Subject::notify()
{
	std::cout << "Subject::notify() called!" << std::endl;
	for (auto &observer : observers) {
		observer.second->update();
	}
}
