#include "Invocateur.h"
#include "Commande.h" 
#include "CommandeRobot.h" 
#include "Robot.h"

int main()
{
	bool continu = true;
	// Invocateur inv = Invocateur();
	Robot r = Robot();
	// CommandeRobot cr = CommandeRobot(r);
	r.avancer(1, 1);
	while(continu){
		cout << "entrer une commande: " << endl;
		continu = false;
		// inv.identifie();
	}
}