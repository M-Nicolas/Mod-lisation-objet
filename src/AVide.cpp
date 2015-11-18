#include <iostream>
using namespace std;

#include "AVide.h"
#include "Current_state.h"
#include "AVideFacePlot.h"
#include "EnRoute.h"

AVide::AVide() {
	//cout<<"Creation"<<endl;
}

AVide::~AVide() {
	//cout<<"Destruction"<<endl;
}

static AVide* AVide::Instance() {
	if (NULL == m_instance){
		m_instance = new AVide;
	}
	return m_instance;
}

Current_state* AVide::avancer(){
	return Instance();
}

Current_state* AVide::tourner(string directionInitiale, string nvelledirection) {
	return Instance();
}

Current_state* AVide::rencontrerPlot() {
	return AVideFacePlot::Instance();
}

ostream& operator<<(ostream& is, Current_state& cs){
	return is << "AVide";
}