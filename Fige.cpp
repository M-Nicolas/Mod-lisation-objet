#import "Fige.h"

//Methode permettant de relancer le robot lorsqu'il est fige
Current_state Fige::repartir() {
	Current_state ret = previous_state;
	previous_state = this;
	return ret;
}