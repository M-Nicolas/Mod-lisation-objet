#include "Robot.h"
#include "Position.h"
#include "Plot.h"
#include "Objet.h"

//classe du Robot 
Robot::Robot()
: _direction("N"), _position(), _plot(), _obj(){}

//Méthode permettant au robot d'avancer : modifie ses parametres de Position
void Robot::avancer(int x, int y){	
	_position.setX(x);
	_position.setY(y);
	cout << "le robot s'est positionné en (" << x << ", " << y << ")" << endl;
}

// Méthode permettant au robot de tourner : modifie sa direction
void Robot::tourner(string direction){
	_direction = direction;
	cout << "le robot et maintenant dans la direction " << direction << "." << endl;
}

//Méthode permettant au robot de saisir l'Objet se trouvant devant lui
void Robot::saisir(Objet obj){
	_obj = obj;
	cout << "l'objet à été saisis" << endl;
}

// Méthode permettant au robot de poser l'objet qu'il tient
void Robot::poser(){
	_obj = Objet();
	cout << "l'objet a été posé" << endl;
}

// Méthode retournant le poids de l'Objet que tient le robot
int Robot::peser(){
	int poids = _obj.getPoids();
	cout << "l'objet pèse " << poids << " kg" << endl;
	return poids; 
}

// Méthode permettant au Robot de découvrir le Plot plot
void Robot::rencontrerPlot(Plot plot){
	_plot = plot;
	cout << "plot rencontré" << endl;
}

// Méthode premettant de mesurer la hauteur du plot rencontrer prècèdement
int Robot::evaluerPlot(){
	int hauteur = _plot.getHauteur();
	cout << "le plot mesure " << hauteur << " cm de haut" << endl;
	return hauteur;
}

// méthode permettant de mettre en pause le robot
void Robot::figer(){
	cout << "le robot est figé" << endl;
}

// méthode permettant au robot figé de repartir
void Robot::repartir(){
	cout << "le robot n'est plus figé" << endl;
}
