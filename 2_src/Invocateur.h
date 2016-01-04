#ifndef _INVOCATEUR_H_
#define _INVOCATEUR_H_

#include <string>
#include <iostream>
using namespace std;

#include "Commande.h"

class Invocateur {
public:
	Invocateur();

	Commande *get_Commande(){
		return Commande::nouvCmd(get_string(), this);
	}

	void identifie(){
		get_Commande()->executer();
	}

	int get_int(){
		int res;
		cin >> res;
		return res;
	}

	string get_string(){
		string res;
		cin >> res;
		return res;
	}
};

#endif