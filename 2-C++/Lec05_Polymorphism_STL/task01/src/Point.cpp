#include "../include/Point.h"

Point::Point():x(0),y(0){};
Point::Point(int x,int y):x(x),y(y){};

void Point::setx(int x){ this->x = x; };
void Point::sety(int y){ this->y = y; };

int Point::getx() const { return this->x; };
int Point::gety() const { return this->y; };