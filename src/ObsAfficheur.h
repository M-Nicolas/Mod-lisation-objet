#ifndef _OBS_AFFICHEUR_H
#define _OBS_AFFICHEUR_H

#include <string>
using namespace std;

class ObsAfficheur
{
public:
	ObsAfficheur();

	virtual void Afficher(string);
};

#endif