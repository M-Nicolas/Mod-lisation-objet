#include "AfficheursRobot.h"

AfficheursRobot()
: _obsAff();

void notifiers(string str){
	int stop = _obsAff.size();
	for (int i = 0; i < stop; ++i){
		_obsAff.afficher(str);
	} 
}

void rajouter(ObsAfficheur oa){
	_obsAff[_obsAff.size() + 1] = oa;
}

void enlever(ObsAfficheur oa){
	int stop = _obsAff.size();
	for (int i = 0; i < stop; ++i){
		if (_obsAff[i] == oa){
			_obsAff.erase(i);
			return;
		}
	}
}

