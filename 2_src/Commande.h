
#include <map>

#include "Invocateur.h"

class Commande {
private:
	static map<string, Commande> cmds;
public:
	void executer();
	void desexecuter();
	void reversible();
	static Commande nouvCmd(string, Invocateur);
	/*
	* cmds[cmd].constructeurVirtuel(invocateur);
	*/
	Commande constructeurVirtuel(Invocateur);
	//On vois ça dans chaque classes de CommandeRobot
}