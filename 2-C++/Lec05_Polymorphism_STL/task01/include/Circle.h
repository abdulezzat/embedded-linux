#ifndef _CIRCLE_H
#define _CIRCLE_H
#include "Drawable.h"
#include "Point.h"
#include <cmath>

class Circle : public Drawable
{
private:
    Point center;
    int r;
public:
    Circle();
    Circle(const Point& p, int r);
    Circle(int x, int y, int r);

    void set_center(const Point & p);
    void set_r(int r);

    Point get_center() const;
    int get_r() const;


    double get_area() override;
    double get_perimeter() override;

    ~Circle();
};


#endif