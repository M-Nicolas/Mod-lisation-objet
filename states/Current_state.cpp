#include <iostream>
using namespace std;

#include "states/Current_state.h"
#include "states/EnRoute.h"

//definition des methodes de la classe Current_state

//Methode permettant de saisir un objet
Current_state Current_state::saisir(){
	throw Current_state::not_available_method_exception();
}

//Methode permettant de faire avancer le Robot d'x sur l'axe des x et d'y syr l'axe des y, en modifiant la Position pos
Current_state Current_state::avancer(){
	throw Current_state::not_available_method_exception();
}

//Methode permettant de tourner le robot dans la direction donnée
Current_state Current_state::tourner(string directionInitiale, string nvelleDirection) {
	throw Current_state::not_available_method_exception();
}

//Methode qui permet au robot de repartir lorsqu'il est fige
Current_state Current_state::repartir() {
	throw Current_state::not_available_method_exception();
}

////Methode permettant d'evaluer la hauteur de l'objet donné
Current_state Current_state::evaluerPlot() {
	throw Current_state::not_available_method_exception();
}

Current_state Current_state::peser() {
	throw Current_state::not_available_method_exception();
}

Current_state Current_state::poser(){
	throw Current_state::not_available_method_exception();
}

Current_state Current_state::rencontrerPlot() {
	throw Current_state::not_available_method_exception();
}

Current_state figer() {
	throw Current_state::not_available_method_exception();
}
