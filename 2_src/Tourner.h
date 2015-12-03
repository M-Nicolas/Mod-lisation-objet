#ifndef TOURNER_H_
#define TOURNER_H_

#include "Invocateur.h"
#include "Commande.h"

class Tourner : public CommandeRobot {
private:
	string direction;
public:
	Tourner();
	void executer();
	Commande constructeurVirtuel(Invocateur);
};

#endif