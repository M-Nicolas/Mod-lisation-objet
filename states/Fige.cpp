#import "states/Fige.h"
#import "states/Current_state.h"

Fige::Fige (Current_state previous_state): _previous_state(previous_state) {
	cout<<"Creation"<<endl;
}

Fige::~Fige() {
	cout<<"Destruction"<<endl;
}

Fige Fige::Instance() {
	if (m_instance == NULL)
		m_instance = new Fige();
	
	return m_instance;
}

//Methode permettant de relancer le robot lorsqu'il est fige
Current_state Fige::repartir() {
	Current_state ret = _previous_state;
	_previous_state = this;
	return ret;
}