#include "EnCharge.h"
#include "EnChargeFacePlot.h"
#include "Current_state.h"

Current_state avancer(){
	return this;
}

Current_state tourner(String directionInitiale, String nvelleDirection){
	return this;
}

Current_state rencontrerPlot(){
	return new EnChargeFacePlot(this);
}

Current_state peser(){
	return this;
}