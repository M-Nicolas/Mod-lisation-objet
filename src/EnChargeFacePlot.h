#ifndef ENCHARGEFACEPLOT_H_
#define ENCHARGEFACEPLOT_H_

#include <iostream>
#include <string>

#include "Current_state.h"
#include "EnRoute.h"

//Classe EnChargeFacePlot qui correspont à l'etat du Robot lorsqu'il porte un objet et qu'il se trouve face à un Plot
class EnChargeFacePlot : public EnRoute {
private:
	static EnChargeFacePlot m_instance;
	EnChargeFacePlot();
	~EnChargeFacePlot();
public:
	static EnChargeFacePlot& Instance(); 
	Current_state *poser();
	Current_state *tourner(string directionInitiale, string nvelleDirection);
	Current_state *evaluerPlot();
	Current_state *peser();
	ostream& operator<<(ostream& is) {
		return is << "EnChargeFacePlot";
	}
};

#endif