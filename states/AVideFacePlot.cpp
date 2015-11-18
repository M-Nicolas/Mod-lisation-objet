#include <iostream>

#include "states/Current_state.h"
#include "states/AVideFacePlot.h"
#include "states/EnChargeFacePlot.h"
#include "states/AVide.h"
#include "states/EnRoute.h"

AVideFacePlot::AVideFacePlot() {
	cout<<"Creation"<<endl;
}

AVideFacePlot::~AVideFacePlot() {
	cout<<"Destruction"<<endl;
}

AVideFacePlot AVideFacePlot::Instance() {
	return m_instance;
}

Current_state AVideFacePlot::saisir(){
	return EnChargeFacePlot::Instance();
}

Current_state AVideFacePlot::tourner(String directionInitiale, String nvelledirection) {
	if (directionInitiale <> nvelledirection)
		return Avide::Instance();
	else
		return this;
}

Current_state AVideFacePlot::evaluerPlot(Object obj) {
	return this;
}