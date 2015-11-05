#include "EnCharge.h"
#include "EnChargeFacePlot.h"
#include "Current_state.h"

EnCharge(Current_state previous_state) : _previous_state(previous_state) {};

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