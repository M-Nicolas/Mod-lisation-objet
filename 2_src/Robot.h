#ifndef _ROBOT_H_
#define _ROBOT_H_

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "Position.h"
#include "Plot.h"
#include "Objet.h"

class Robot 
{
private:
	string _direction;
	Position _position;
	Plot _plot;
	Objet _obj;

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
};

#endif