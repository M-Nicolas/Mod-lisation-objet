#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "AfficheursRobot.h"
#include "datas/Position.h"
#include "datas/Plot.h"
#include "datas/Objet.h"
#include "states/Current_state.h"

class Robot : public AfficheursRobot 
{
private:
	string _direction;
	Position _position;
	Plot _plot;
	Objet _obj;
	Current_state _current_state;

public:
	Robot();
	~Robot();

	void avancer(int, int);
	void tourner(string);
	void saisir(Objet);
	void poser();
	int peser();
	void rencontrerPlot(Plot);
	int evaluerPlot();
	void figer();
	void repartir();
	
	void agit();

	string get_direction(){
		return _direction;
	}
	Position get_position(){
		return _position;
	}
	Plot get_plot(){
		return _plot;
	}
	Objet get_objet(){
		return _obj;
	}
	Current_state get_current_state(){
		return _current_state;
	}
};