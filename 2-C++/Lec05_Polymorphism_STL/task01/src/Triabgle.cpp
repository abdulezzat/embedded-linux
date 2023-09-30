#include "../include/Triangle.h"

Triangle::Triangle():p1(Point(0,0)),p2(Point(0,0)),p3(Point(0,0)) {};
Triangle::Triangle(const Point& p1, const Point& p2, const Point& p3):p1(p1),p2(p2),p3(p3) {};

void Triangle::setp1(const Point& p) { this->p1 = p; };
void Triangle::setp2(const Point& p) { this->p2 = p; };
void Triangle::setp3(const Point& p) { this->p3 = p; };

Point Triangle::getp1() const { return this->p1; };
Point Triangle::getp2() const { return this->p2; };
Point Triangle::getp3() const { return this->p3; };


double Triangle::get_area() { 
    return abs(0.5 * static_cast<double>(this->p1.getx() * (this->p2.gety() - this->p3.gety())+
                  this->p2.getx() * (this->p3.gety() - this->p1.gety())+
                  this->p3.getx() * (this->p1.gety() - this->p2.gety())));
};

double Triangle::get_perimeter() {
    int a = sqrt(pow((this->p1.getx() - this->p2.getx()), 2) + pow((this->p1.gety() - this->p2.gety()), 2));
    int b = sqrt(pow((this->p1.getx() - this->p3.getx()), 2) + pow((this->p1.gety() - this->p3.gety()), 2));
    int c = sqrt(pow((this->p3.getx() - this->p2.getx()), 2) + pow((this->p3.gety() - this->p2.gety()), 2));

    return a+b+c;
};


Triangle::~Triangle(){};