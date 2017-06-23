/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  21/06/2017 18:08:48
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "concrete_factory_a.h"
#include "concrete_factory_b.h"
#include <iostream>

int main() 
{
	ConcreteFactoryA concreteFactoryA;
	concreteFactoryA.createProductA();
	concreteFactoryA.createProductB();

	ConcreteFactoryB concreteFactoryB;
	concreteFactoryB.createProductA();
	concreteFactoryB.createProductB();
    return 0;
}
