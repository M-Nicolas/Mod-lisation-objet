#include "Current_state.h"
#include "aVideFacePlot.h"
#include "EnChargeFacePlot.h"
#include "aVide.h"

Current_state aVideFacePlot::saisir(){
	return new EnChargeFacePlot(this);
}

Current_state aVideFacePlot::tourner(String directionInitiale, String nvelledirection) {
	if (directionInitiale <> nvelledirection)
		return new aVide(this);
	else
		return this;
}

Current_state aVideFacePlot::evaluerPlot(Object obj) {
	return this;
}