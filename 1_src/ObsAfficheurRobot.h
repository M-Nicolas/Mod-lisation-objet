#ifndef _OBS_AFFICHEUR_ROBOT_H
#define _OBS_AFFICHEUR_ROBOT_H

#include <string>
using namespace std;

#include "ObsAfficheur.h"
#include "Robot.h"

class ObsAfficheurRobot : public ObsAfficheur {
private:
	Robot* _robot;

public:
	ObsAfficheurRobot(Robot*);

	void Afficher(string);
};

#endif