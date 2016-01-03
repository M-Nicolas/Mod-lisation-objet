#include "Robot.h"
#include "ObsAfficheurRobot.h"

//classe du Robot 
Robot::Robot()
: _direction("N"), _position(), _plot(), _obj(){}

//Méthode permettant au robot d'avancer : modifie ses parametres de Position
void Robot::avancer(int x, int y){	
	_position.setX(x);
	_position.setY(y);
}

// Méthode permettant au robot de tourner : modifie sa direction
void Robot::tourner(string direction){
	_direction = direction;
}

//Méthode permettant au robot de saisir l'Objet se trouvant devant lui
void Robot::saisir(Objet obj){
	_obj = obj;
}

// Méthode permettant au robot de poser l'objet qu'il tient
void Robot::poser(){
	_obj = Objet();
}

// Méthode retournant le poids de l'Objet que tient le robot
int Robot::peser(){
	return _obj.getPoids();
}

// Méthode permettant au Robot de découvrir le Plot plot
void Robot::rencontrerPlot(Plot plot){
	_plot = plot;
}

// Méthode premettant de mesurer la hauteur du plot rencontrer prècèdement
int Robot::evaluerPlot(){
	return _plot.getHauteur();
}

// méthode permettant de mettre en pause le robot
void Robot::figer(){
}

// méthode permettant au robot figé de repartir
void Robot::repartir(){
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
