#include "Data.h"

Data(string command = "", string direction, Position position, Plot plot, Objet obj, Current_state current_state) :
_command(command), _direction(direction), _position(position), _plot(plot), _obj(obj), _currentState(current_state);

ostream& operator<<(ostream& is, Data d){
	return is;
}
