//Classe aVideFacePlot qui correspont à l'etat du Robot lorsqu'il ne porte pas d'objet et qu'il se trouve face à un Plot
class aVide extends Current_state{ //TODO : modifier l'héritage pour qu'il corresponde à du C++
public:
	Current_state avancer();
	Current_state tourner(String directionInitiale, String nvelledirection);
	Current_state rencontrerPlot();
};