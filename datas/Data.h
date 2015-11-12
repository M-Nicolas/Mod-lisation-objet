#include <iostream>
#include <String>
using namespace std;

#include "datas/Position.h"
#include "datas/Plot.h"
#include "datas/Objet.h"
#include "states/Current_state.h"



class Data
{
private:
	String _command;
	String _direction;
	Position _position;
	Plot _plot;
	Objet _obj;
	Current_state _current_state;

public:
	Data(string, string, Position, Plot, Objet, Current_state);

	friend ostream& operator<<(ostream&, Data);
};