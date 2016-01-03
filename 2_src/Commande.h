#ifndef _COMMANDE_H_
#define _COMMANDE_H_

#include <string>
#include <map>
using namespace std;

class Commande
{
protected:
	static std::map<string, Commande*> _prec_cmds;

public:
	Commande();

	executer(sring);
	desexectuer(string);

	static std::map<string, Commande*>& cmds(){
		std::map<string, Commande*>* cmds;
		return *cmds;
	}

	static Commande nouvCmd(string cmd, Invocateur invocateur){
		return cmds()[cmd].constructeurVirtuel(invocateur);
	}
	
	Commande constructeurVirtuel(Invocateur);
	//On vois ça dans chaque classes de CommandeRobot

	static add_to_prec(Commande* cmd){
		_prec_cmds.push_back(cmd);
	}
};

#endif
