#ifndef _COMMANDE_H_
#define _COMMANDE_H_

#include <string>
#include <map>
#include <vector>
using namespace std;

#include "Invocateur.h"

class Commande {
protected:
	static std::vector<string, Commande*> _prec_cmds;

public:
	Commande() {};

	void executer(string);
	void desexectuer(string);

	static std::map<string, Commande*>& cmds(){
		std::map<string, Commande*>* cmds;
		return *cmds;
	}

	static Commande* nouvCmd(string cmd, Invocateur invocateur){
		return cmds()[cmd]->constrVirtuel(invocateur);
	}
	
	Commande* constrVirtuel(Invocateur);
	//On vois ça dans chaque classes de CommandeRobot

	static void add_to_prec(Commande* cmd){
		_prec_cmds.push_back(cmd);
	}
};

#endif
