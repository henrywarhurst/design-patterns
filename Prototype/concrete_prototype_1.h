#ifndef CONCRETE_PROTOTYPE_1_H
#define CONCRETE_PROTOTYPE_1_H

#include "prototype.h"

class ConcretePrototype1 : public Prototype
{
	public:
		ConcretePrototype1();
		virtual ~ConcretePrototype1();

		virtual Prototype* clone();

		virtual int getMemberVariable();

		virtual void setMemberVariable(int new_val);
	
	private:
		int some_member_;

};

#endif // CONCRETE_PROTOTYPE_1_H
