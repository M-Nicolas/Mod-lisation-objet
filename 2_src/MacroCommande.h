#ifndef _MACRO_COMMANDE_H_
#define _MACRO_COMMANDE_H_

#include <vector>
#include <string>
using namespace std;

class MacroCommande : public Commande {
private:
	vector<Commande*> _v;

public:
	MacroCommande()
	: _v() {}

	MacroCommande(vector<Commande*> v)
	: _v(v)
	{}
	
	void executer(){
		for (Commande* c: _v)
			c->executer();
		add_to_prec(this);
	}
	
	Commande* consrtVirtuel(Invocateur inv){
		return new MacroCommande();
	}
	
	void desexecuter(){
		for (int i = _v.size() - 1; i >= 0; --i)
			_v[i]->executer();
	}
};

class DefMacro : public Commande {
public:
	static DefMacro _defMacro;

	DefMacro(){}

	void executer(){
	}
	
	Commande* consrtVirtuel(Invocateur inv){
		vector<Commande *> v = vector<Commande *>();
		string mot = inv.get_string();
		while(mot != "FINMACRO"){
			v.push_back(inv.get_Commande(mot));
			mot = inv.get_string();
		}
		return new DefMacro();
	}
};

class Appeler : public Commande {
public:
	static Appeler _appeler;

	Appeler(){}

	void executer(){
	}
	
	Commande* consrtVirtuel(Invocateur inv){
	}
};

#endif