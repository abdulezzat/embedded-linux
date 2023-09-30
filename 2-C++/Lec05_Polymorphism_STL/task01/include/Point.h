#ifndef _POINT_H
#define _POINT_H

class Point{
private:
    int x,y;
public:
    explicit Point();
    explicit Point(int x,int y);

    void setx(int x);
    void sety(int y);

    int getx() const;
    int gety() const;
};

#endif