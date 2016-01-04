#include <string>
#include <iostream>
using namespace std;

#include "Invocateur.h"

Invocateur::Invocateur(){}

Commande* Invocateur::get_Commande(){
	return Commande::nouvCmd(get_string(), this);
}

void Invocateur::identifie(){
	get_Commande()->executer();
}

int Invocateur::get_int(){
	int res;
	cin >> res;
	return res;
}

string Invocateur::get_string(){
	string res;
	cin >> res;
	return res;
}

