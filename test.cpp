//classe du Robot
class Robot {
public:
	//Méthode permettant au robot d'avancer : modifie ses parametres de Position
	void avancer(int x, int y){	
		try{	
			currentState.avancer();
		} catch(not_available_method_exception e) {
			//TODO : réaction en cas d'utilisation de méthode non autorisé
		}

	}
	//Méthode permettant au robot de saisir l'Object se trouvant devant lui
	void saisir(Obj o){
		try{
			saisir(Object, this);
		} catch(not_available_method_exception e) {
			//TODO : réaction en cas d'utilisation de méthode non authorisé
		}
	}
	//méthode retournant la position actuelle du robot
	Position get_position() {
		return this->position;
	}

private:
	Object object; //objet tenu par le robot : peut être NULL s'il ne tient rien
	Position position; //Position du robot dans son état actuel 
};

//Exception retournée quand le robot ne peux faire une action dans un étât donné
class not_available_method_exception(){};

//classe dont hériterons les différents états
class Current_state{
public:
	saisir(Object obj, Robot rob){
		throw not_available_method_exception();
	}
	v_saisir(Object obj, Robot rob){
		throw not_available_method_exception();
	}
	avancer(int x, int y, Position pos,Robot rob){
		throw not_available_method_exception();
	}	
};

class aVideFacePlot extends Current_state{ //TODO : modifier l'héritage pour qu'il corresponde à du C++
	saisir(Object obj, Robot rob){
		rob.setObject(obj);
	}
};

class fige extends Current_state{ //TODO : modifier l'héritage pour qu'il corresponde à du C++

};