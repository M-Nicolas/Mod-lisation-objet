#ifndef AVIDEFACEPLOT_H_
#define AVIDEFACEPLOT_H_

#include <iostream>
#include <string>
using namespace std;

#include "Current_state.h"
#include "EnRoute.h"
#include "Objet.h"

//Classe AVideFacePlot qui correspont à l'etat du Robot lorsqu'il ne porte pas d'objet et qu'il se trouve face à un Plot
class AVideFacePlot : public EnRoute {
private:
	static AVideFacePlot *m_instance;
	AVideFacePlot();
	~AVideFacePlot();

public:
	static AVideFacePlot* Instance();
	Current_state* saisir();
	Current_state* tourner(string directionInitiale, string nvelleDirection);
	Current_state* evaluerPlot(Objet);
	ostream& operator<<(ostream& is) {
		return is << "AVideFacePlot";
	}
};

#endif