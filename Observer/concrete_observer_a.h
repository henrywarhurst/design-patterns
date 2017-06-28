#ifndef CONCRETE_OBSERVER_A
#define CONCRETE_OBSERVER_A

#include <string>
#include "concrete_subject.h"

class ConcreteObserverA : public Observer
{
	public:
		ConcreteObserverA(ConcreteSubject *subject, std::string key);
		virtual ~ConcreteObserverA();
	
		void update();
		std::string getKey();

	private:
		ConcreteSubject *subject_;
		int observer_state_;
		std::string key_;
};



#endif // CONCRETE_OBSERVER_A
