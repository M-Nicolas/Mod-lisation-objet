#ifndef SINGLETON_H
#define SINGLETON_H

#include "Current_state.h"

//Classe EnChargeFacePlot qui correspont à l'etat du Robot lorsqu'il porte un objet et qu'il se trouve face à un Plot
class EnChargeFacePlot extends Current_state{ //TODO : modifier l'héritage pour qu'il corresponde à du C++
private:
	static EnChargeFacePlot m_instance;
	EnChargeFacePlot();
	~EnChargeFacePlot();
public:
	static EnChargeFacePlot& Instance(); 
	Current_state poser();
	Current_state tourner(String directionInitiale, String nvelleDirection);
	Current_state evaluerPlot();
	Current_state peser();
};

#endif