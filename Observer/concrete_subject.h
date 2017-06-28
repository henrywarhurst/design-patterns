#ifndef CONCRETE_SUBJECT_H
#define CONCRETE_SUBJECT_H

#include "subject.h"

class ConcreteSubject : public Subject
{
	public:
		ConcreteSubject();
		virtual ~ConcreteSubject();

		int getState();
		void setState(int new_state);

	private:
		int subject_state_;
};

#endif // CONCRETE_SUBJECT_H
