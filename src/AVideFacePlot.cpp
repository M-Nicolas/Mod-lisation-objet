#include <string>

#include "Current_state.h"
#include "AVideFacePlot.h"
#include "EnChargeFacePlot.h"
#include "AVide.h"
#include "EnRoute.h"

AVideFacePlot::AVideFacePlot() {
	cout<<"Creation"<<endl;
}

AVideFacePlot::~AVideFacePlot() {
	cout<<"Destruction"<<endl;
}

AVideFacePlot* AVideFacePlot::Instance() {
	return &m_instance;
}

Current_state* AVideFacePlot::saisir(){
	return EnChargeFacePlot::Instance();
}

Current_state* AVideFacePlot::tourner(string directionInitiale, string nvelledirection) {
	if (directionInitiale <> nvelledirection)
		return AVide::Instance();
	else
		return Instance();
}

Current_state* AVideFacePlot::evaluerPlot(Object obj) {
	return Instance();
}