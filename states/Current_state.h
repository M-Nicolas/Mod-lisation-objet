//Classe Current_state dont hériterons tout les Etats
class Current_state{
public:
	Current_state saisir();
	Current_state avancer();
	Current_state tourner(String directionInitiale, String nvelleDirection);
	Current_state repartir();
	Current_state evaluerPlot();
	Current_state peser();
	Current_state poser();
	Current_state rencontrerPlot();
};

//Exception retournée quand le robot ne peux faire une action dans un étât donné
class not_available_method_exception(){};
