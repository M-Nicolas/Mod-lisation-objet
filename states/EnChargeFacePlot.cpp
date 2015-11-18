#include <iostream>

#include "states/Current_state.h"
#include "states/EnChargeFacePlot.h"
#include "states/AVideFacePlot.h"
#include "states/EnCharge.h"
#include "states/EnRoute.h"

EnChargeFacePlot::EnChargeFacePlot() {
	//cout<<"Creation"<<endl;
}

EnChargeFacePlot::~EnChargeFacePlot() {
	//cout<<"Destruction"<<endl;
}

Fige *EnChargeFacePlot::Instance() {
	/*if (m_instance == NULL)
		m_instance = new EnChargeFacePlot();
	*/
	return &m_instance;
}

Current_state *EnChargeFacePlot::poser() {
	return AVideFacePlot::Instance();
}

Current_state *EnChargeFacePlot::tourner(String directionInitiale, String nvelleDirection){
	if (directionInitiale <> nvelleDirection)
		return EnCharge::Instance();
	else
		return Instance();
}

Current_state *EnChargeFacePlot::evaluerPlot() {
	return Instance();
}

Current_state *EnChargeFacePlot::peser() {
	return Instance();
}