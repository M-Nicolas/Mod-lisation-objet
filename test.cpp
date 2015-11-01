class Robot {
private :
	Object object;
	Position position;
	
public:
	void avancer(int x, int y){	
		try{	
			currentState.avancer();
			Position.setX(x);
		} catch(not_available_method_exception e) {

		}

	}

	void saisir(Obj o){
		try{
			saisir(Object, this);
		} catch(not_available_method_exception e) {

		}
	}
};

class not_available_method_exception(){};

//classe dont hériterons les différents états
class current_state{
public:
	saisir(Obj, Rob){
		throws not_available_method_exception();
	}

	v_saisir(Obj, Rob){
		throws not_available_method_exception();
	}

	avancer(int,int,Pos){}	
};

//TODO : modifier l'héritage pour qu'il corresponde à du C++
class aVideFacePlot extends current_state{
	saisir(Obj, Rob){
		// vrai méthode
		Rob.setObject(Obj);
	}
};

class fige extends current_state{};