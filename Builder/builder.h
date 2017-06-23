#ifndef BUILDER_H
#define BUILDER_H

class Builder
{
	public:
		Builder(){}
		virtual ~Builder(){}

		// Note that these are intentially left 
		// as blank functions. This is so that
		// all subclasses aren't forced to build
		// parts that are not relevant to them.
		virtual void buildPartA(){}
		virtual void buildPartB(){}
};

#endif // BUILDER_H
