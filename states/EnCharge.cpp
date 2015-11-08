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
	return m_instance;
}

Current_state EnCharge::avancer(){
	return this;
}

Current_state EnCharge::tourner(String directionInitiale, String nvelleDirection){
	return this;
}

Current_state EnCharge::rencontrerPlot(){
	return new EnChargeFacePlot(this);
}

Current_state EnCharge::peser(){
	return this;
}