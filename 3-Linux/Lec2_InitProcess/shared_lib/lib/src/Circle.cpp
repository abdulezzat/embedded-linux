#include "../include/Circle.h"

Circle::Circle():center(Point(0,0)),r(1){};

Circle::Circle(const Point& p, int r):center(p),r(r){};
Circle::Circle(int x, int y, int r):center(Point(x,y)),r(r){};

void Circle::set_center(const Point & p){ this->center = p; };
void Circle::set_r(int r){ this->r = r;};

Point Circle::get_center() const{
    return this->center;
};
    
int Circle::get_r() const{
    return this->r;
};


double Circle::get_area() {
    return (M_PI * this->r * this->r);
};

double Circle::get_perimeter() {
    return (2 * M_PI * this->r);
};

Circle::~Circle(){};
