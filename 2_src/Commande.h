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

	static friend void identifie(string cmd);
};

#endif