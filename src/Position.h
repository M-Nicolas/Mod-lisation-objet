#ifndef _POSITION_
#define _POSITION_

/*
Décrit une position sur un plan 
 */
class Position
{
private:
	int _x;
	int _y;

public:
	Position(int = 0, int = 0);
	~Position();

	void setX(int);
	void setY(int);

	int getX();
	int getY();
};

#endif