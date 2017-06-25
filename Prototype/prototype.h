#ifndef PROTOTYPE_H
#define PROTOTYPE_H

class Prototype
{
	public:
		Prototype(){}
		virtual ~Prototype(){}

		virtual Prototype* clone() = 0;

		virtual int getMemberVariable() = 0;

		virtual void setMemberVariable(int new_val) = 0;

};

#endif // PROTOTYPE_H
