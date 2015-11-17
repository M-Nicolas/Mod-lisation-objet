#include "datas/ObsAfficheur.h"
#include "Robot.h"

class ObsAfficheurRobot : public ObsAfficheur {
private:
	Robot _robot;

public:
	ObsAfficheurRobot(Robot);

	void Afficher();
};