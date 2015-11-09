#include "Current_state.h"
#include "EnChargeFacePlot.h"
#include "AVideFacePlot.h"
#include "EnCharge.h"

EnChargeFacePlot::EnChargeFacePlot() {
	cout<<"Creation"<<endl;
}

EnChargeFacePlot::~EnChargeFacePlot() {
	cout<<"Destruction"<<endl;
}

Fige EnChargeFacePlot::Instance() {
	if (m_instance == NULL)
		m_instance = new EnChargeFacePlot();

	return m_instance;
}

Current_state EnChargeFacePlot::poser() {
	return AVideFacePlot.Instance();
}

Current_state EnChargeFacePlot::tourner(String directionInitiale, String nvelleDirection){
	if (directionInitiale <> nvelleDirection)
		return EnCharge.Instance();
	else
		return this;
}

Current_state EnChargeFacePlot::evaluerPlot() {
	return this;
}

Current_state EnChargeFacePlot::peser() {
	return this;
}