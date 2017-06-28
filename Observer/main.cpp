#include <iostream>
#include "concrete_subject.h"
#include "concrete_observer_a.h"
#include "concrete_observer_b.h"

int main()
{
	ConcreteSubject *subject = new ConcreteSubject();
	ConcreteObserverA *observerA = new ConcreteObserverA(subject, "a");
	ConcreteObserverB *observerB = new ConcreteObserverB(subject, "b");

	subject->attach(observerA);
	subject->attach(observerB);

	subject->setState(5);

	delete subject;
	delete observerA;
	delete observerB;
	return 0;
}
