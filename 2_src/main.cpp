#include "Invocateur.h"
#include "Commande.h" 
#include "CommandeRobot.h" 

int main()
{
	bool continu = true;
	Invocateur inv = Invocateur();
	while(continu){
		cout << "entrer une commande: " << endl;
		inv.identifie();
	}
}