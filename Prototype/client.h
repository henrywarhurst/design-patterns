#ifndef CLIENT_H
#define CLIENT_H

#include "prototype.h"

class Client
{
	public:
		Client();
		virtual ~Client();	

		void operation(Prototype *prototype);

};

#endif // CLIENT_H
