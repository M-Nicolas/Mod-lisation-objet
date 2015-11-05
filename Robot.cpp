//classe du Robot 						XXX aucun changement d'état n'est fait.

//Méthode permettant au robot d'avancer : modifie ses parametres de Position
void Robot::avancer(int x, int y){	
	try{	
		_currentState.avancer();
		_x = x;
		_y = y;
	} catch(not_available_method_exception e) {
		//TODO : réaction en cas d'utilisation de méthode non autorisé
	}
}

// Méthode permettant au robot de tourner : modifie sa direction
void Robot::tourner(String direction){
	try{
		_currentState.tourner();
		_direction = direction;
	} catch(not_available_method_exception e) {
		//TODO : réaction en cas d'utilisation de méthode non autorisé
	}
}

//Méthode permettant au robot de saisir l'Objet se trouvant devant lui
void Robot::saisir(Objet obj){
	try{
		_currentState.saisir();
		_obj = obj;
	} catch(not_available_method_exception e) {
		//TODO : réaction en cas d'utilisation de méthode non authorisé
	}
}

// Méthode permettant au robot de poser l'objet qu'il tient
void Robot::poser(){
	try{
		_currentState.poser();
		_obj = Objet();
	} catch(not_available_method_exception e) {
		//TODO : réaction en cas d'utilisation de méthode non authorisé
	}
}

// Méthode retournant le poids de l'Objet que tient le robot
int Robot::peser(){
	try{
		_currentState.peser();
		return _obj.getPoids();
	} catch(not_available_method_exception e) {
		//TODO : réaction en cas d'utilisation de méthode non authorisé
	}	
}

void Robot::rencontrerPlot(){
	try{
		_currentState.rencontrerPlot();
	} catch(not_available_method_exception e) {
		//TODO : réaction en cas d'utilisation de méthode non authorisé
	}	
}

// Getter retournant la position actuelle du robot
Position Robot::get_position() {
	return this->position;
}

/* XXX corps d'une fonction basique
(){
	try{
		_currentState.
	} catch(not_available_method_exception e) {
		//TODO : réaction en cas d'utilisation de méthode non authorisé
	}	
}
*/
