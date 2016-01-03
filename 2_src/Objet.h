#ifndef _OBJET_H_
#define _OBJET_H_

class Objet {
private:
	int _poids;
public:
	Objet(int poids = 0) :_poids(poids){}
	int getPoids();
};

#endif