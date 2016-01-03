#ifndef _INVOCATEUR_H_
#define _INVOCATEUR_H_

#include <string>
#include <iostream>

#include "Commande.h"
using namespace std;

class Invocateur {
private:
	
public:
	void identifie(){
		get_Commande().executer();
	}

	Commande get_Commande(){
		return Commande::nouvCmd(get_string(), this);
	}

	int get_int(){
		return std:readInt();
	}

	string get_string(){
		return std:readString();
	}
};

#endif