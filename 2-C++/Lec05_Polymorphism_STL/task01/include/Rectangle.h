#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "Drawable.h"
#include "Point.h"
#include <cmath>

class Rectangle : public Drawable
{
private:
    Point p1,p2,p3,p4;
    int len , wid ;

    void update_dim();
public:
    Rectangle();
    Rectangle(int l,int w);
    Rectangle(const Point& p1, const Point& p3);

    void setp1(const Point& p);
    void setp2(const Point& p);
    void setp3(const Point& p);
    void setp4(const Point& p);

    Point getp1() const;
    Point getp2() const;
    Point getp3() const;
    Point getp4() const;

    int getlen() const;
    int getwid() const;

    double get_area() override;
    double get_perimeter() override;

    ~Rectangle();
};



#endif