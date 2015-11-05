#include "aVideFacePlot.h"

void aVideFacePlot::saisir(Object obj, Robot rob){
	rob.setObject(obj);
}

void aVideFacePlot::tourner(String direction, Robot rob) {
	switch {
		case "N" : rob.setDirection("N");
		case "E" : rob.setDirection("E");
		case "S" : rob.setDirection("S");
		case "W" : rob.setDirection("W");
		default : throw bad_direction_exception();
	}
}

int aVideFacePlot::evaluerPlot(Object obj) {
	return obj.getHauteur();
}