#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>
#include <string>
using namespace std;

#include "states/Current_state.h"
#include "states/EnRoute.h"

//Classe aVide qui correspont à l'etat du Robot lorsqu'il ne porte pas d'objet et qu'il ne se trouve pas face à un Plot
class AVide : public EnRoute{
private:
	static AVide m_instance;
	AVide();
	
public:
	~AVide();

	static AVide Instance();
	Current_state avancer();
	Current_state tourner(string directionInitiale, string nvelledirection);
	Current_state rencontrerPlot();
	friend ostream& operator<<(ostream&, Current_state&) ;

};

#endif