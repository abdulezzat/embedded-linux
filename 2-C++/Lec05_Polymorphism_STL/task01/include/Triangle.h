#ifndef _TRIANGLE_H
#define _TRIANGLE_H
#include "Drawable.h"
#include "Point.h"
#include <cmath>

class Triangle : public Drawable
{
private:
     Point p1,p2,p3;
public:
    Triangle();
    Triangle(const Point& p1, const Point& p2, const Point& p3);

    void setp1(const Point& p);
    void setp2(const Point& p);
    void setp3(const Point& p);

    Point getp1() const;
    Point getp2() const;
    Point getp3() const;

    double get_area() override;
    double get_perimeter() override;


    ~Triangle();
};



#endif