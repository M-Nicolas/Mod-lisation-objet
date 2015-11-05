#include "aVideFacePlot.h"

Current_state aVideFacePlot::saisir(){
	return new EnChargeFacePlot(this);
}

Current_state aVideFacePlot::tourner(String directionInitiale, String nvelledirection) {
	if (directionInitiale <> nvelledirection)
		return new aVide(this);
	else
		return new aVideFacePlot(this);
}

Current_state aVideFacePlot::evaluerPlot(Object obj) {
	return this;
}