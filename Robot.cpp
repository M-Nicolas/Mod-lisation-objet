#include "Robot.h"

//classe du Robot 
Robot::Robot()
: _direction('N'), _position(), _plot(), _obj(), _current_state(), _data();


//Méthode permettant au robot d'avancer : modifie ses parametres de Position
void Robot::avancer(int x, int y){	
	try{	
		_current_state = _current_state.avancer();
		_position.setX(x);
		_position.setY(y);
	} catch(not_available_method_exception e) {
		//TODO : réaction en cas d'utilisation de méthode non autorisé
	}
	_data.push_back(Data("avancer de " + x + ", " + y, _direction, _position, _plot, _obj, _current_state));
}

// Méthode permettant au robot de tourner : modifie sa direction
void Robot::tourner(String direction){
	try{
		_current_state = _current_state.tourner(_direction, direction);
		_direction = direction;
	} catch(not_available_method_exception e) {
		//TODO : réaction en cas d'utilisation de méthode non autorisé
	}
	_data.push_back(Data("tourner a " + direction, _direction, _position, _plot, _obj, _current_state));	
}

//Méthode permettant au robot de saisir l'Objet se trouvant devant lui
void Robot::saisir(Objet obj){
	try{
		_current_state = _current_state.saisir();
		_obj = obj;
	} catch(not_available_method_exception e) {
		//TODO : réaction en cas d'utilisation de méthode non authorisé
	}
	_data.push_back(Data("saisir", _direction, _position, _plot, _obj, _current_state));
}

// Méthode permettant au robot de poser l'objet qu'il tient
void Robot::poser(){
	try{
		_current_state = _current_state.poser();
		_obj = Objet();
	} catch(not_available_method_exception e) {
		//TODO : réaction en cas d'utilisation de méthode non authorisé
	}
	_data.push_back(Data("poser ", _direction, _position, _plot, _obj, _current_state));	
}

// Méthode retournant le poids de l'Objet que tient le robot
int Robot::peser(){
	try{
		_current_state = _current_state.peser();
		return _obj.getPoids();
	} catch(not_available_method_exception e) {
		//TODO : réaction en cas d'utilisation de méthode non authorisé
	}	
	_data.push_back(Data("peser", _direction, _position, _plot, _obj, _current_state));
}

// Méthode permettant au Robot de découvrir le Plot plot
void Robot::rencontrerPlot(Plot plot){
	try{
		_current_state = _current_state.rencontrerPlot();
		_plot = plot;
	} catch(not_available_method_exception e) {
		//TODO : réaction en cas d'utilisation de méthode non authorisé
	}	
	_data.push_back(Data("rencontrerPlot", _direction, _position, _plot, _obj, _current_state));	
}

// Méthode premettant de mesurer la hauteur du plot rencontrer prècèdement
int Robot::evaluerPlot(){
	try{
		_current_state = _current_state.evaluerPlot();
		return _plot.getHauteur();
	} catch(not_available_method_exception e) {
		//TODO : réaction en cas d'utilisation de méthode non authorisé
	}	
	_data.push_back(Data("evaluerPlot", _direction, _position, _plot, _obj, _current_state));	
}

// méthode permettant de mettre en pause le robot
void Robot::figer(){
	try{
		_current_state = _current_state.figer();
	} catch(not_available_method_exception e) {
		//TODO : réaction en cas d'utilisation de méthode non authorisé
	}	
	_data.push_back(Data("figer", _direction, _position, _plot, _obj, _current_state));
}

// méthode permettant au robot figé de repartir
void Robot::repartir(){
	try{
		_current_state = _current_state.repartir();
	} catch(not_available_method_exception e) {
		//TODO : réaction en cas d'utilisation de méthode non authorisé
	}	
	_data.push_back(Data("repartir", _direction, _position, _plot, _obj, _current_state));
}

void Robot::afficher(){
	int stop = _data.size();
	for (int i = 0; i < stop; ++i){
		cout << _data[i];
	}
}

// Getter retournant la position actuelle du robot XXX en a t'on besoin ?
// Position Robot::get_position() {
// 	return _position;
// }

/* XXX corps d'une fonction basique
(){
	try{
		_current_state = _current_state.
	} catch(not_available_method_exception e) {
		//TODO : réaction en cas d'utilisation de méthode non authorisé
	}	
}
*/
