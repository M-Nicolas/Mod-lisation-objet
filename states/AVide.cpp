#include <iostream>
using namespace std;

#include "states/Current_state.h"
#include "states/AVide.h"
#include "states/AVideFacePlot.h"
#include "states/EnRoute.h"

AVide::AVide() {
	cout<<"Creation"<<endl;
}

AVide::~AVide() {
	cout<<"Destruction"<<endl;
}

AVide AVide::Instance() {
	return m_instance;
}

Current_state AVide::avancer(){
	return Instance();
}

Current_state AVide::tourner(string directionInitiale, string nvelledirection) {
	return Instance();
}

Current_state AVide::rencontrerPlot() {
	return AVideFacePlot::Instance();
}

ostream& operator<<(ostream& is, Current_state& cs){
	return is << "AVide";
}