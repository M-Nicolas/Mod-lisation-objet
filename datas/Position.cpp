#include "datas/Position.h"

Position::Position(int x = 0, int y = 0)
: _x(x), _y(y)
{}

void Position::setX(int x){
	_x = x;
}
void Position::setY(int y){
	_y = y;
}

int Position::getX(){
	return _x;
}
int Position::getY(){
	return _y;
}

