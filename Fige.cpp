#import "Fige.h"

Fige::Fige(Current_state previous_state) : _previous_state(previous_state) {};

//Methode permettant de relancer le robot lorsqu'il est fige
Current_state Fige::repartir() {
	Current_state ret = _previous_state;
	_previous_state = this;
	return ret;
}