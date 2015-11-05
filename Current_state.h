//Classe Current_state dont hériterons tout les Etats
class Current_state{
public:
	void saisir(Object obj, Robot rob);
	void avancer(int x, int y, Position pos,Robot rob);
	void tourner(String direction);
	int evaluerPlot(Object obj);
};