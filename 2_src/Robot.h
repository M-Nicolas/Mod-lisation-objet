#ifndef _ROBOT_H_
#define _ROBOT_H_

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "AfficheursRobot.h"
#include "Position.h"
#include "Plot.h"
#include "Objet.h"
// #include "Current_state.h"

class Robot : public AfficheursRobot 
{
private:
	string _direction;
	Position _position;
	Plot _plot;
	Objet _obj;
	// Current_state* _current_state;
	// Current_state* _previous_state;

public:
	Robot();

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
	// Current_state* get_current_state(){
	// 	return _current_state;
	// }
};

#endif