#include "Current_state.h"
#include "AVideFacePlot.h"
#include "EnChargeFacePlot.h"
#include "AVide.h"

AVideFacePlot::AVideFacePlot() {
	cout<<"Creation"<<endl;
}

AVideFacePlot::~AVideFacePlot() {
	cout<<"Destruction"<<endl;
}

AVideFacePlot AVideFacePlot::Instance() {
	if (m_instance == NULL) {
		m_instance = new AVideFacePlot();
	}

	return m_instance;
}

Current_state AVideFacePlot::saisir(){
	return EnChargeFacePlot.Instance();
}

Current_state AVideFacePlot::tourner(String directionInitiale, String nvelledirection) {
	if (directionInitiale <> nvelledirection)
		return Avide.Instance();
	else
		return this;
}

Current_state AVideFacePlot::evaluerPlot(Object obj) {
	return this;
}