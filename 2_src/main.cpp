#include <string>
using namespace std;

#include "Invocateur.h"
#include "Commande.h" 
#include "CommandeRobot.h" 
#include "Robot.h"

int main()
{
	bool continu = true;
	Invocateur inv = Invocateur();
	Robot r = Robot();
	CommandeRobot cr = CommandeRobot(r);
	while(continu){
		cout << "entrer une commande: " << endl;
		inv.identifie();
	}
}