#include <vector>
#include <string>
using namespace std;

#include "afficheurs/ObsAfficheur.h"

class AfficheursRobot
{
private:
	std::vector<ObsAfficheur> _obsAff;

public:
	AfficheursRobot();

	void notifiers(string);
	void rajouter(ObsAfficheur);
	void enlever(ObsAfficheur);
};