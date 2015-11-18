#include <string>

#include "AVideFacePlot.h"
#include "Current_state.h"
#include "EnChargeFacePlot.h"
#include "AVide.h"
#include "EnRoute.h"
#include "Objet.h"

AVideFacePlot::AVideFacePlot() {
	cout<<"Creation"<<endl;
}

AVideFacePlot::~AVideFacePlot() {
	cout<<"Destruction"<<endl;
}

static AVideFacePlot* AVideFacePlot::Instance() {
	if (NULL == m_instance) {
		m_instance = new AVideFacePlot;
	}

	return m_instance;
}

Current_state* AVideFacePlot::saisir(){
	return EnChargeFacePlot::Instance();
}

Current_state* AVideFacePlot::tourner(string directionInitiale, string nvelledirection) {
	if (!directionInitiale.compare(nvelledirection))
		return AVide::Instance();
	else
		return Instance();
}

Current_state* AVideFacePlot::evaluerPlot(Objet obj) {
	return Instance();
}