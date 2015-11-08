#include "Current_state.h"

//classe Fige qui correspont a l'etat fige du Robot
class Fige extends Current_state{ //TODO : modifier l'héritage pour qu'il corresponde à du C++
private:
	Current_state _previous_state;
public:
	Fige(Current_state = NULL);
	Current_state repartir();
};