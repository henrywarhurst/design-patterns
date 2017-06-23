#ifndef ABSTRACT_FACTORY_H
#define ABSTRACT_FACTORY_H

class AbstractFactory
{
	public:
		AbstractFactory(){}
		virtual ~AbstractFactory(){}

		virtual void createProductA() = 0;
		virtual void createProductB() = 0;

};

#endif // ABSTRACT_FACTORY_H
