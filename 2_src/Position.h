#ifndef _POSITION_H_
#define _POSITION_H_

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

	void setX(int);
	void setY(int);

	int getX();
	int getY();
};

#endif