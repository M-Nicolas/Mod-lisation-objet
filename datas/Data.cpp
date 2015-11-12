#include "Data.h"

Data(string command = "", string direction, Position position, Plot plot, Objet obj, Current_state current_state) :
_command(command), _direction(direction), _position(position), _plot(plot), _obj(obj), _currentState(current_state);

ostream& operator<<(ostream& is, Data d){
	is << "commande: " << _command << endl;
	is << "    direction: " << direction << endl;
	is << "    position: x=" << _position.getX() << " y=" << _position.getY() << endl;
	if (_plot.getHauteur() != 0)
		is << "    plot: " << _plot.getHauteur() << endl;
	else
		is << "    pas de plot " << endl;
	if (_obj.getPoids() != 0)
		is << "    objet: " << _obj.getPoids() << endl;
	else
		is << "    pas d'objet' " << endl;
	is << "    etat courant: " <<  _currentState << endl;
	return is;
}
