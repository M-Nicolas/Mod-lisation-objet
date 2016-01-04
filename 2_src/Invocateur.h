#ifndef _INVOCATEUR_H_
#define _INVOCATEUR_H_

#include <string>
using namespace std;

#include "Commande.h"

class Invocateur;
class Commande;

class Invocateur {
public:
	Invocateur();

	Commande *get_Commande();

	void identifie();

	int get_int();

	string get_string();
};

#endif