#include <iostream>
using namespace std;

#include "afficheurs/ObsAfficheurRobot.h"
#include "datas/Plot.h"
#include "datas/Objet.h"
#include "datas/Position.h"
#include "states/Current_state.h"

ObsAfficheurRobot(Robot robot)
: _robot(robot);

void Afficher(){
	cout << "commande: " << _robot::get_current_state() << endl;
	cout << "    direction: " << _robot::get_direction() << endl;
	cout << "    position: x=" << _robot::get_position().getX() << " y=" << _robot::get_position().getY() << endl;
	if (_robot::get_plot().getHauteur() != 0)
		cout << "    plot: " << _robot::get_plot().getHauteur() << endl;
	else
		cout << "    pas de plot " << endl;
	if (_robot::get_objet().getPoids() != 0)
		cout << "    objet: " << _robot::get_objet().getPoids() << endl;
	else
		cout << "    pas d'objet' " << endl;
	cout << "    etat courant: " << _robot::get_current_state() << endl;
	return is;
}
