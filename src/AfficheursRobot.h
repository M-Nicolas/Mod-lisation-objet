#include <vector>
#include <string>
using namespace std;

#include "ObsAfficheur.h"

class AfficheursRobot
{
private:
	std::vector<ObsAfficheur> _obsAff;

public:
	AfficheursRobot();

	void notifiers(string);
	int rajouter(ObsAfficheur);
	void enlever(int);
};