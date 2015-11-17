#include "AfficheursRobot.h"

AfficheursRobot()
: _obsAff();

void notifiers(string){

}

void rajouter(ObsAfficheur oa){
	_obsAff[_obsAff.size() + 1] = oa;
}

void enlever(ObsAfficheur){

}

