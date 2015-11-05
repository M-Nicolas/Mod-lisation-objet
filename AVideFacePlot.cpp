class aVideFacePlot extends Current_state{ //TODO : modifier l'héritage pour qu'il corresponde à du C++
	void saisir(Object obj, Robot rob){
		rob.setObject(obj);
	}

	void tourner(String direction, Robot rob) {
		switch {
			case "N" : rob.setDirection("N");
			case "E" : rob.setDirection("E");
			case "S" : rob.setDirection("S");
			case "W" : rob.setDirection("W");
			default : throw bad_direction_exception();
		}
	}

	int evaluerPlot(Object obj) {
		return obj.getHauteur();
	}
};
