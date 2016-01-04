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
	
	Commande* consrtVirtuel(Invocateur& inv){
		return new MacroCommande();
	}
	
	void desexecuter(){
		for (int i = _v.size() - 1; i >= 0; --i)
			_v[i]->executer();
	}
};

class DefMacro : public Commande {
private:
	Invocateur _inv;
public:
	static DefMacro _defMacro;

	DefMacro(Invocateur& inv)
	:_inv(inv){}

	void executer(){
		vector<Commande *> v = vector<Commande *>();
		string mot = _inv.get_string();
		while(mot != "FINMACRO"){
			v.push_back(_inv.get_Commande(mot));
			mot = _inv.get_string();
		}
		new MacroCommande(v);
	}
	
	Commande* consrtVirtuel(Invocateur& inv){
		return new DefMacro(inv);
	}
};

class Appeler : public Commande {
public:
	static Appeler _appeler;

	Appeler(){}

	void executer(){
	}
	
	Commande* consrtVirtuel(Invocateur& inv){
	}
};

#endif