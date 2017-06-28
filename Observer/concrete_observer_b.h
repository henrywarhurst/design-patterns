#ifndef CONCRETE_OBSERVER_B
#define CONCRETE_OBSERVER_B

#include <string>
#include "concrete_subject.h"

class ConcreteObserverB : public Observer
{
	public:
		ConcreteObserverB(ConcreteSubject *subject, std::string key);
		virtual ~ConcreteObserverB();
	
		void update();
		std::string getKey();

	private:
		ConcreteSubject *subject_;
		int observer_state_;
		std::string key_;
};

#endif // CONCRETE_OBSERVER_B
