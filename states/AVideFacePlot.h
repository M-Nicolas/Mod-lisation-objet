#ifndef SINGLETON_H
#define SINGLETON_H

#include "Current_state.h"

//Classe aVideFacePlot qui correspont à l'etat du Robot lorsqu'il ne porte pas d'objet et qu'il se trouve face à un Plot
class aVideFacePlot extends Current_state{ //TODO : modifier l'héritage pour qu'il corresponde à du C++
private:
	static aVideFacePlot m_instance;
	aVideFacePlot();
	~aVideFacePlot();

public:
	static aVideFacePlot Instance();
	Current_state saisir();
	Current_state tourner(String directionInitiale, String nvelleDirection);
	Current_state evaluerPlot();
};

#endif