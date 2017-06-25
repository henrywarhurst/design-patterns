#ifndef CONCRETE_PROTOTYPE_2_H
#define CONCRETE_PROTOTYPE_2_H

#include "prototype.h"

class ConcretePrototype2 : public Prototype
{
	public:
		ConcretePrototype2();
		virtual ~ConcretePrototype2();

		virtual Prototype* clone();

		virtual int getMemberVariable();

		virtual void setMemberVariable(int new_val);
	
	private:
		int some_member_;

};

#endif // CONCRETE_PROTOTYPE_2_H
