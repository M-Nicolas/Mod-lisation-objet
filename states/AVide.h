#ifndef SINGLETON_H
#define SINGLETON_H

#include "Current_state.h"

//Classe aVide qui correspont à l'etat du Robot lorsqu'il ne porte pas d'objet et qu'il ne se trouve pas face à un Plot
class AVide : public Current_state{
private:
	static Fige m_instance;
	aVide();
	~aVide();
	
public:
	static aVide& Instance();
	Current_state avancer();
	Current_state tourner(String directionInitiale, String nvelledirection);
	Current_state rencontrerPlot();
	ostream& operator<<(osteam& is) {
		return is << "AVide";
	}

};

#endif