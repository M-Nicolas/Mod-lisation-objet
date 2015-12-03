#ifndef _COMMANDE_H_
#define _COMMANDE_H_

#include <string>
#include <map>

class Commande
{
private:
	static std::map<string, Commande> _cmds;
public:
	Commande();
	~Commande();

	executer(sring);
	desexectuer(string);
	reversible();

	static Commande nouvCmd(string, Invocateur);
	/*
	* cmds[cmd].constructeurVirtuel(invocateur);
	*/
	Commande constructeurVirtuel(Invocateur);
	//On vois ça dans chaque classes de CommandeRobot
};

#endif
