#include <iostream>
using namespace std;

#include "ObsAfficheurRobot.h"
#include "Plot.h"
#include "Objet.h"
#include "Position.h"
#include "Current_state.h"

ObsAfficheurRobot::ObsAfficheurRobot(Robot* robot)
: _robot(robot){}

void ObsAfficheurRobot::Afficher(string commande){
	cout << "commande: " << commande << endl;
	cout << "    direction: " << _robot->get_direction() << endl;
	cout << "    position: x=" << _robot->get_position().getX() << " y=" << _robot->get_position().getY() << endl;
	if (_robot->get_plot().getHauteur() != 0)
		cout << "    plot: " << _robot->get_plot().getHauteur() << endl;
	else
		cout << "    pas de plot " << endl;
	if (_robot->get_objet().getPoids() != 0)
		cout << "    objet: " << _robot->get_objet().getPoids() << endl;
	else
		cout << "    pas d'objet' " << endl;
	Current_state* cs = _robot->get_current_state();
	cout << "    etat courant: " << cs << endl;
}
