#ifndef _CURRENT_STATE_H_
#define _CURRENT_STATE_H_

#include <string>
using namespace std;

//Classe Current_state dont hériterons tout les Etats
class Current_state{
public:
	Current_state *saisir();
	Current_state *avancer();
	Current_state *tourner(string directionInitiale, string nvelleDirection);
	Current_state *repartir(Current_state*);
	Current_state *evaluerPlot();
	Current_state *peser();
	Current_state *poser();
	Current_state *rencontrerPlot();
	Current_state *figer();

	//Exception retournée quand le robot ne peux faire une action dans un étât donné
	class not_available_method_exception{};

	friend ostream& operator<<(ostream& is, Current_state& cs);
};

#endif