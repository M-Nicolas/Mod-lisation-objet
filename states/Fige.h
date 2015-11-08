#ifndef SINGLETON_H
#define SINGLETON_H

#include "Current_state.h"

//classe Fige qui correspont a l'etat fige du Robot
class Fige extends Current_state{ //TODO : modifier l'héritage pour qu'il corresponde à du C++
private:
	Current_state _previous_state;
	static Fige m_instance;
	Fige(Current_state = NULL);
	~Fige();
public:
	static Fige& Instance();
	Current_state repartir();
};

#endif