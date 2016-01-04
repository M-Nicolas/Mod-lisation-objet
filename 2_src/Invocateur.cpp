#include <string>
#include <iostream>
using namespace std;

#include "Invocateur.h"

Invocateur(){}

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
