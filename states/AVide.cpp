#include "Current_state.h"
#include "aVide.h"
#include "aVideFacePlot.h"

aVide::aVide() {
	cout<<"Creation"<<endl;
}

aVide::~aVide() {
	cout<<"Destruction"<<endl;
}

aVide aVide::Instance() {
	return m_instance;
}

Current_state aVide::avancer(){
	return this;
}

Current_state aVide::tourner(String directionInitiale, String nvelledirection) {
	return this;
}

Current_state aVide::rencontrerPlot() {
	return new aVideFacePlot(this);
}