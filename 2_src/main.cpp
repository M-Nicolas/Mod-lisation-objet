#include "Commande.h" 
#include "CommandeRobot.h" 
#include "Invocateur.h"

int main()
{
	bool continu = true;
	Invocateur inv = Invocateur();
	while(continu){
		cout << "entrer une commande: " << endl;
		inv.identifie();
	}
}