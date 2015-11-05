#include <iostream>
#include <String>
using namespace std;

#include "Position.h"
#include "Plot.h"
#include "Objet.h"
#include "Current_state.h"

class Robot
{
private:
	String _direction;
	Position _position;
	Plot _plot;
	Objet _obj;
	Current_state _currentState;

public:
	Robot();
	~Robot();

	void avancer(int, int);
	void tourner(String);
	void saisir(Objet);
	void poser();
	int peser();
	void rencontrerPlot(Plot);
	int evaluerPlot();
	void figer();
	void repartir();
};