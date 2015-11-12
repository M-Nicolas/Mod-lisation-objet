#include "Robot.h"

//classe du Robot 
Robot::Robot()
: _direction('N'), _position(), _plot(), _obj(), _current_state(), _data(){
	_data.push_back(Data("initial", _direction, _position, _plot, _obj, _current_state));
}


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

void agit(){
	afficher();
	string command; string direction; char c;int x; int y;
	cout << "que voulez-vous faire ? " ;
	while(cin >> command ){
		case "avancer": 
			cout << " de quel x y ? " << endl;
			if(cin >> x >> c >>y)
				avancer(x, y);
			break;
		case "tourner": 
			cout << " quelle direction ?" <<endl;
			if (cin >> direction)
				tourner(direction);
			break;
		case "saisir": 
			saisir(Objet(10));
			break;
		case "poser": 
			poser();
			break;
		case "peser": 
			cout << "l'objet pese " << peser() << endl;
			break;
		case "rencontrerPlot": 
			rencontrerPlot(Plot(75));
			break;
		case "evaluerPlot": 
			cout << "le plot mesure " << evaluerPlot() << endl;
			break;
		case "figer": 
			figer();
			break;
		case "repartir": 
			repartir();
			break;
		case "afficher":
			afficher();
			break;
		default:
			cout << "actions possibles: \n avancer" << " tourner" << " saisir"
				<< " poser" << " peser" << " rencontrerPlot" << " evaluerPlot"
				<< " figer" << " repartir" << "afficher" << endl;
	}
}

int main(int argc, char const *argv[]) {
	agit();
	return 0;
}
/* XXX corps d'une fonction basique
(){
	try{
		_current_state = _current_state.
	} catch(not_available_method_exception e) {
		//TODO : réaction en cas d'utilisation de méthode non authorisé
	}	
}
*/
