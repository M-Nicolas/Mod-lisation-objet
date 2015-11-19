#include "EnCharge.h"
#include "EnChargeFacePlot.h"
#include "Current_state.h"
#include "EnRoute.h"
using namespace std;

EnCharge::EnCharge() {
	//cout << "Creation" << endl;
}

EnCharge::~EnCharge() {
	//cout << "Destruction" << endl;
}

EnCharge *EnCharge::Instance() {
	if (NULL == m_instance) {
		m_instance = new EnCharge;
	}
	return m_instance;
}

Current_state *EnCharge::avancer(){
	return Instance();
}

Current_state *EnCharge::tourner(string directionInitiale, string nvelleDirection){
	return Instance();
}

Current_state *EnCharge::rencontrerPlot(){
	return EnChargeFacePlot::Instance();
}

Current_state *EnCharge::peser(){
	return Instance();
}