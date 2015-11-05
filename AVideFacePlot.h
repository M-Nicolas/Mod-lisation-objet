//Classe aVideFacePlot qui correspont à l'etat du Robot lorsqu'il ne porte pas d'objet et qu'il se trouve face à un Plot
class aVideFacePlot extends Current_state{ //TODO : modifier l'héritage pour qu'il corresponde à du C++
public:
	void saisir(Object obj, Robot rob);
	void tourner(String direction, Robot rob);
	int evaluerPlot(Object obj);
};
