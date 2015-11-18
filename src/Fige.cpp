#import "Fige.h"
#import "Current_state.h"

Fige::Fige () {
	// cout << "Creation" << endl;
}

Fige::~Fige() {
	// cout << "Destruction" << endl;
}

Fige* Fige::Instance() {
	// if (m_instance == NULL)
	// 	m_instance = new Fige();
	return &m_instance;
}

//Methode permettant de relancer le robot lorsqu'il est fige
Current_state* Fige::repartir(Current_state* cs) {
	return cs;
}

ostream& operator<<(ostream& is, Current_state& cs) {
	return  is << "Fige";
}