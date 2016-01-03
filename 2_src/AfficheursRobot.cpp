#include "AfficheursRobot.h"

AfficheursRobot::AfficheursRobot()
: _obsAff(){}

void AfficheursRobot::notifiers(string str){
	int stop = _obsAff.size();
	for (int i = 0; i < stop; ++i){
		_obsAff[i].Afficher(str);
	} 
}

int AfficheursRobot::rajouter(ObsAfficheur oa){
	int fin = _obsAff.size() + 1;
	_obsAff[fin] = oa;
	return fin;
}

void AfficheursRobot::enlever(int i){
	_obsAff.erase(_obsAff.begin() + i);
}

