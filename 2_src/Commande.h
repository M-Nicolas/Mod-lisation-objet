#ifndef _COMMANDE_H_
#define _COMMANDE_H_

#include <string>
#include <map>
#include <vector>
using namespace std;

#include "Invocateur.h"

class Commande {
protected:
	static std::vector<Commande*> _prec_cmds;

public:
	Commande() {};

	void executer();
	void desexectuer();

	static std::map<string, Commande*>& cmds(){
		static std::map<string, Commande*>* cmds;
		return *cmds;
	}

	static Commande* nouvCmd(string cmd, Invocateur invocateur){
		return cmds()[cmd]->constrVirtuel(invocateur);
	}
	
	Commande* constrVirtuel(Invocateur&);
	//On vois ça dans chaque classes de CommandeRobot

	static void add_to_prec(Commande* cmd){
		_prec_cmds.push_back(cmd);
	}
};

class Desexecuter : Commande {
private:
	static Desexecuter desexecuter;
public:
	Desexecuter();
	void executer() {
		int last = _prec_cmds.size() - 1;
		_prec_cmds[last]->desexectuer();
		_prec_cmds.pop_back();
	}

	Commande* constrVirtuel(Invocateur) {
		return new Desexecuter();
	}
};

#endif
