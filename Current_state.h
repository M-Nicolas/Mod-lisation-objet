//Classe Current_state dont hériterons tout les Etats
class Current_state{
private:
	Current_state previous_state;
public:
	Current_state saisir();
	Current_state avancer();
	Current_state tourner(String directionInitiale, String nvelleDirection);
	Current_state repartir();
	Current_state evaluerPlot();
};