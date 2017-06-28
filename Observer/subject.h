#ifndef SUBJECT_H
#define SUBJECT_H

#include <map>
#include <string>
#include "observer.h"

class Subject
{
	public:
		Subject();
		virtual ~Subject();
		
		virtual void attach(Observer *observer);
		virtual void detach(Observer *observer);

		virtual void notify();
	
	protected:
		std::map<std::string, Observer *> observers;

};
	
#endif // SUBJECT_H
