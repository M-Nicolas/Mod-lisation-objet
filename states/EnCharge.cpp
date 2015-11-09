#include "EnCharge.h"
#include "EnChargeFacePlot.h"
#include "Current_state.h"

EnCharge::EnCharge() {
	cout<<"Creation"<<endl;
}

EnCharge::~EnCharge() {
	cout<<"Destruction"<<endl;
}

EnCharge EnCharge::Instance() {
	if (m_instance = NULL)
		m_instance = new EnCharge();
	
	return m_instance;
}

Current_state EnCharge::avancer(){
	return this;
}

Current_state EnCharge::tourner(String directionInitiale, String nvelleDirection){
	return this;
}

Current_state EnCharge::rencontrerPlot(){
	return EnChargeFacePlot::Instance();
}

Current_state EnCharge::peser(){
	return this;
}