#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>

#include "states/Current_state.h"
#include "states/EnRoute.h"

//Classe EnChargeFacePlot qui correspont à l'etat du Robot lorsqu'il porte un objet et qu'il se trouve face à un Plot
class EnChargeFacePlot : public EnRoute {
private:
	static EnChargeFacePlot *m_instance;
	EnChargeFacePlot();
	~EnChargeFacePlot();
public:
	static EnChargeFacePlot& Instance(); 
	Current_state *poser();
	Current_state *tourner(String directionInitiale, String nvelleDirection);
	Current_state *evaluerPlot();
	Current_state *peser();
	ostream& operator<<(osteam& is) {
		return is << "EnChargeFacePlot";
	}
};

#endif