#ifndef SINGLETON_H
#define SINGLETON_H

#include "Current_state.h"

//Classe aVide qui correspont à l'etat du Robot lorsqu'il ne porte pas d'objet et qu'il ne se trouve pas face à un Plot
class aVide extends Current_state{ //TODO : modifier l'héritage pour qu'il corresponde à du C++
private:
	static Fige m_instance;
	aVide();
	~aVide();
	
public:
	static aVide& Instance();
	Current_state avancer();
	Current_state tourner(String directionInitiale, String nvelledirection);
	Current_state rencontrerPlot();
};

#endif