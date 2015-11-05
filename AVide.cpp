#include "aVide.h"

aVide::aVide(Current_state previous_state) : _previous_state(previous_state);

Current_state aVide::avancer(){
	return this;
}

Current_state aVide::tourner(String directionInitiale, String nvelledirection) {
	return this;
}

Current_state aVide::rencontrerPlot() {
	return new aVideFacePlot(this);
}