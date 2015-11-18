#include "Robot.h"
#include "ObsAfficheurRobot.h"

//classe du Robot 
Robot::Robot()
: _direction("N"), _position(), _plot(), _obj(), _current_state(){}


//Méthode permettant au robot d'avancer : modifie ses parametres de Position
void Robot::avancer(int x, int y){	
	try{	
		_current_state = _current_state.avancer();
		_position.setX(x);
		_position.setY(y);
	} catch(Current_state::not_available_method_exception e) {
		cout << "Vous ne pouvez pas faire ça." << endl;
	}
}

// Méthode permettant au robot de tourner : modifie sa direction
void Robot::tourner(string direction){
	try{
		_current_state = _current_state.tourner(_direction, direction);
		_direction = direction;
	} catch(Current_state::not_available_method_exception e) {
		cout << "Vous ne pouvez pas faire ça." << endl;
	}
}

//Méthode permettant au robot de saisir l'Objet se trouvant devant lui
void Robot::saisir(Objet obj){
	try{
		_current_state = _current_state.saisir();
		_obj = obj;
	} catch(Current_state::not_available_method_exception e) {
		cout << "Vous ne pouvez pas faire ça." << endl;
	}
}

// Méthode permettant au robot de poser l'objet qu'il tient
void Robot::poser(){
	try{
		_current_state = _current_state.poser();
		_obj = Objet();
	} catch(Current_state::not_available_method_exception e) {
		cout << "Vous ne pouvez pas faire ça." << endl;
	}
}

// Méthode retournant le poids de l'Objet que tient le robot
int Robot::peser(){
	try{
		_current_state = _current_state.peser();
		return _obj.getPoids();
	} catch(Current_state::not_available_method_exception e) {
		cout << "Vous ne pouvez pas faire ça." << endl;
	}
	return 0;	
}

// Méthode permettant au Robot de découvrir le Plot plot
void Robot::rencontrerPlot(Plot plot){
	try{
		_current_state = _current_state.rencontrerPlot();
		_plot = plot;
	} catch(Current_state::not_available_method_exception e) {
		cout << "Vous ne pouvez pas faire ça." << endl;
	}	
}

// Méthode premettant de mesurer la hauteur du plot rencontrer prècèdement
int Robot::evaluerPlot(){
	try{
		_current_state = _current_state.evaluerPlot();
		return _plot.getHauteur();
	} catch(Current_state::not_available_method_exception e) {
		cout << "Vous ne pouvez pas faire ça." << endl;
	}	
	return 0;
}

// méthode permettant de mettre en pause le robot
void Robot::figer(){
	try{
		_previous_state = _current_state;
		_current_state = _current_state.figer();
	} catch(Current_state::not_available_method_exception e) {
		cout << "Vous ne pouvez pas faire ça." << endl;
	}	
}

// méthode permettant au robot figé de repartir
void Robot::repartir(){
	try{
		_current_state = _current_state.repartir(_previous_state);
	} catch(Current_state::not_available_method_exception e) {
		cout << "Vous ne pouvez pas faire ça." << endl;
	}	
}

void Robot::agit(){
	int obs = AfficheursRobot::rajouter(ObsAfficheurRobot(this));
	string command; string direction; char c;int x; int y;
	cout << "que voulez-vous faire ? " ;
	while(cin >> command ){
		if (command == "avancer"){ 
			cout << " de quel x y ? " << endl;
			if(cin >> x >> c >>y)
				Robot::avancer(x, y);
 		} else if (command == "tourner"){
			cout << " quelle direction ?" <<endl;
			if (cin >> direction)
				Robot::tourner(direction);
 		} else if (command == "saisir"){
			Robot::saisir(Objet(10));
 		} else if (command == "poser"){
			Robot::poser();
 		} else if (command == "peser"){
			cout << "l'objet pese " << Robot::peser() << endl;
 		} else if (command == "rencontrerPlot"){
			Robot::rencontrerPlot(Plot(75));
 		} else if (command == "evaluerPlot"){
			cout << "le plot mesure " << Robot::evaluerPlot() << endl;
 		} else if (command == "figer"){
			Robot::figer();
 		} else if (command == "repartir"){ 
			Robot::repartir();
 		}else{
			cout << "actions possibles: \n avancer" << " tourner" << " saisir"
				<< " poser" << " peser" << " rencontrerPlot" << " evaluerPlot"
				<< " figer" << " repartir" << endl;
		}
		AfficheursRobot::notifiers(command);
	}
	AfficheursRobot::enlever(obs);
}

int main(int argc, char const *argv[]) {
	Robot::Robot().agit();
	return 0;
}
