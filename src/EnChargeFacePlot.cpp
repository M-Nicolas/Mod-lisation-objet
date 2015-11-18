#include <iostream>
#include <string>

#include "Current_state.h"
#include "EnChargeFacePlot.h"
#include "AVideFacePlot.h"
#include "EnCharge.h"
#include "EnRoute.h"

EnChargeFacePlot::EnChargeFacePlot() {
	//cout<<"Creation"<<endl;
}

EnChargeFacePlot::~EnChargeFacePlot() {
	//cout<<"Destruction"<<endl;
}

EnChargeFacePlot* EnChargeFacePlot::Instance() {
	/*if (m_instance == NULL)
		m_instance = new EnChargeFacePlot();
	*/
	return &m_instance;
}

Current_state *EnChargeFacePlot::poser() {
	return AVideFacePlot::Instance();
}

Current_state *EnChargeFacePlot::tourner(string directionInitiale, string nvelleDirection){
	if (!directionInitiale.compare(nvelleDirection))
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