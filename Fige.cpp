#import "Fige.h"

//Methode permettant de relancer le robot lorsqu'il est fige
void Fige::repartir(Robot rob) {
	rob.changer_etat();
}