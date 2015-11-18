#ifndef SINGLETON_H
#define SINGLETON_H

#include <ostream>
using namespace std;

#include "Current_state.h"

//classe Fige qui correspont a l'etat fige du Robot
class Fige : public Current_state{
private:
	static Fige m_instance;
	Fige();
public:
	~Fige();

	static Fige* Instance();
	Current_state repartir(Current_state);

	friend ostream& operator<<(ostream&, Current_state&);
};

#endif