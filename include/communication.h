#ifndef __COMMUNICATION_H__ 
#define __COMMUNICATION_H__

#include <iostream>

//uniquement un .h
class Communication
{
	public:
	int transmettre_action(const std::string);
	int transmettre_message(const std::string);
};


#endif

