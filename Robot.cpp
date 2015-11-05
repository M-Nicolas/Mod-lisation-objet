#include <Current_state.h>

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
