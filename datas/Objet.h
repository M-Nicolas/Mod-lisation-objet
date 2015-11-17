#ifndef _OBJET_
#define _OBJET_

class Objet {
private:
	int _poids;
public:
	Objet(int poids = 0) :_poids(poids){}
	int getPoids();
};

#endif