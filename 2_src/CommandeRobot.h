#ifndef _COMMANDE_ROBOT_H_
#define _COMMANDE_ROBOT_H_

#include "Commande.h"

class CommandeRobot : public Command
{
private:
	static Robot _r;
public:
	CommandeRobot(Robot r);
	CommandeRobot();

	~CommandeRobot();
};

#endif