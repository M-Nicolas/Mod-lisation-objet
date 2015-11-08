#include "Current_state.h"
#include "EnChargeFacePlot.h"
#include "aVideFacePlot.h"
#include "EnCharge.h"

Current_state EnChargeFacePlot::poser() {
	return new aVideFacePlot(this);
}

Current_state EnChargeFacePlot::tourner(String directionInitiale, String nvelleDirection){
	if (directionInitiale <> nvelleDirection)
		return new EnCharge(this);
	else
		return this;
}

Current_state EnChargeFacePlot::evaluerPlot() {
	return this;
}

Current_state EnChargeFacePlot::peser() {
	return this;
}