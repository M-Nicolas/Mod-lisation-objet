#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>

#include "states/Current_state.h"
#include "states/EnRoute.h"

//Classe EnChargequi correspont à l'etat du Robot lorsqu'il ne porte un objet et qu'il ne se trouve pas face à un Plot
class EnCharge : public EnRoute {
private:
	static EnCharge m_instance;
    EnCharge();
    ~EnCharge();

public:
	static EnCharge& Instance();
	Current_state avancer();
	Current_state tourner(String directionInitiale, String nvelleDirection);
	Current_state rencontrerPlot();
	Current_state peser();
	ostream& operator<<(osteam& is) {
		return is << "EnCharge";
	}

};

#endif
