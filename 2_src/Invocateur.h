#ifndef _INVOCATEUR_H_
#define _INVOCATEUR_H_

#include <string>
#include <iostream>

using namespace std;

#include "Commande.h"

class Invocateur {
private:
	
public:
	Invocateur();

	void identifie(){
		get_Commande()->executer();
	}

	Commande* get_Commande(){
		return Commande::nouvCmd(get_string(), this);
	}

	int get_int(){
		int res;
		cin >> res;
		return res;
	}

	string get_string(){
		string res;
		cin >> res;
		return res;	}
};

#endif