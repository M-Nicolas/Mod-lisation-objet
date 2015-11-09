#include "Current_state.h"
#include "AVide.h"
#include "AVideFacePlot.h"

AVide::AVide() {
	cout<<"Creation"<<endl;
}

AVide::~AVide() {
	cout<<"Destruction"<<endl;
}

AVide AVide::Instance() {
	if (m_instance == NULL)
		m_instance = new AVide();

	return m_instance;
}

Current_state AVide::avancer(){
	return this;
}

Current_state AVide::tourner(String directionInitiale, String nvelledirection) {
	return this;
}

Current_state AVide::rencontrerPlot() {
	return AVideFacePlot.Instance();
}