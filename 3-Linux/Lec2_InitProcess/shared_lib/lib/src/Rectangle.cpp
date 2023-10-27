#include "../include/Rectangle.h"

Rectangle::Rectangle():p1(Point(0,0)),p2(Point(0,0)),p3(Point(0,0)),p4(Point(0,0)){
    this->update_dim();
};

Rectangle::Rectangle(int l, int w):len(l),wid(w){
    this->p4.setx(0);
    this->p4.sety(0);

    this->p3.setx(this->wid);
    this->p3.sety(0);

    this->p2.setx(this->wid);
    this->p2.sety(this->len);

    this->p1.setx(0);
    this->p1.sety(this->len);
};

Rectangle::Rectangle(const Point& p1, const Point& p3):p1(p1),p3(p3){
    this->p2.setx(this->p3.getx());
    this->p2.sety(this->p1.gety());

    this->p4.setx(this->p1.getx());
    this->p4.sety(this->p3.gety());

    this->update_dim();
};

void Rectangle::update_dim() {
    this->len = sqrt(pow((this->p1.getx() - this->p4.getx()), 2) + pow((this->p1.gety() - this->p4.gety()), 2));
    this->wid = sqrt(pow((this->p1.getx() - this->p2.getx()), 2) + pow((this->p1.gety() - this->p2.gety()), 2));
};

void Rectangle::setp1(const Point& p) { 
    this->p1 = p; 
    this->p4.setx(p.getx());
    this->p2.sety(p.gety());
    
    this->update_dim();
    };
void Rectangle::setp2(const Point& p) { 
    this->p2 = p; 
    this->p3.setx(p.getx());
    this->p1.sety(p.gety());
    
    this->update_dim();
 };
void Rectangle::setp3(const Point& p) { 
    this->p3 = p; 
    this->p2.setx(p.getx());
    this->p4.sety(p.gety());
    
    this->update_dim();
 };
void Rectangle::setp4(const Point& p) { 
    this->p4 = p; 
    this->p1.setx(p.getx());
    this->p3.sety(p.gety());
    
    this->update_dim();
 };

Point Rectangle::getp1() const { return this->p1; };
Point Rectangle::getp2() const { return this->p2; };
Point Rectangle::getp3() const { return this->p3; };
Point Rectangle::getp4() const { return this->p4; };

int Rectangle::getlen() const { return this->len; };
int Rectangle::getwid() const { return this->wid; };


double Rectangle::get_area() {
    return (this->len * this->wid);
};

double Rectangle::get_perimeter() {
    return 2*(this->len + this->wid);
};

Rectangle::~Rectangle(){};