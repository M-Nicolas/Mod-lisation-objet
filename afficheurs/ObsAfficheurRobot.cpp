#include "ObsAfficheurRobot.h"
#include "Plot.h"
#include "Objet.h"
#include "Position.h"

ObsAfficheurRobot(Robot robot)
: _robot(robot);

void Afficher(){
	is << "commande: " << _robot::get_current_state() << endl;
	is << "    direction: " << _robot::get_direction() << endl;
	is << "    position: x=" << _robot::get_position().getX() << " y=" << _robot::get_position().getY() << endl;
	if (_robot::get_plot().getHauteur() != 0)
		is << "    plot: " << _robot::get_plot().getHauteur() << endl;
	else
		is << "    pas de plot " << endl;
	if (_robot::get_objet().getPoids() != 0)
		is << "    objet: " << _robot::get_objet().getPoids() << endl;
	else
		is << "    pas d'objet' " << endl;
	is << "    etat courant: " << _robot::get_current_state() << endl;
	return is;
}
