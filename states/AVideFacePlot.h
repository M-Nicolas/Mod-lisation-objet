#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>
#include <string>
using namespace std;

#include "states/Current_state.h"
#include "states/EnRoute.h"

//Classe AVideFacePlot qui correspont à l'etat du Robot lorsqu'il ne porte pas d'objet et qu'il se trouve face à un Plot
class AVideFacePlot : public EnRoute {
private:
	static AVideFacePlot* m_instance;
	AVideFacePlot();
	~AVideFacePlot();

public:
	static AVideFacePlot* Instance();
	Current_state* saisir();
	Current_state* tourner(String directionInitiale, String nvelleDirection);
	Current_state* evaluerPlot();
	ostream& operator<<(osteam& is) {
		return is << "AVideFacePlot";
	}
};

#endif