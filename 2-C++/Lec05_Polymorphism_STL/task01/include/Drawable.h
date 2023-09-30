#ifndef _DRAW_H
#define _DRAW_H

class Drawable{
private:

public:
    virtual double get_area() = 0;
    virtual double get_perimeter() = 0;
    virtual ~Drawable() {};
};


#endif