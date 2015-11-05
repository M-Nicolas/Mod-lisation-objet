//classe dont hériterons les différents états
class Current_state{
public:
	void saisir(Object obj, Robot rob){
		throw not_available_method_exception();
	}
	void v_saisir(Object obj, Robot rob){
		throw not_available_method_exception();
	}
	void avancer(int x, int y, Position pos,Robot rob){
		throw not_available_method_exception();
	}
	void tourner(String direction) {
		throw not_available_method_exception();
	}
	int evaluerPlot(Object obj) {
		throw not_available_method_exception();
	}
};
