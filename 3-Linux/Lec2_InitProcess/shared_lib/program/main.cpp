#include "Drawable.h"
#include "Circle.h"
#include "Point.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <iostream>
using namespace std;
int main(){
    Point center(0,0);
    int r = 5;

    Drawable * circle = new Circle(center,r);

    Point p1_r(0,5);
    Point p3_r(5,0);

    Drawable * rectangle = new Rectangle(p1_r,p3_r);

    Point p1_t(0,5);
    Point p2_t(5,0);
    Point p3_t(-5,0);

    Drawable * triangle = new Triangle(p1_t,p2_t,p3_t);

    cout<<"Circle\n" <<"Area: "<< circle->get_area() <<"\n"<<"Perimeter: "<<circle->get_perimeter()<<endl;
    cout<<endl;
    cout<<"Rectangle\n" <<"Area: "<< rectangle->get_area() <<"\n"<<"Perimeter: "<<rectangle->get_perimeter()<<endl;
    cout<<endl;
    cout<<"Triangle\n" <<"Area: "<< triangle->get_area() <<"\n"<<"Perimeter: "<<triangle->get_perimeter()<<endl;
    cout<<endl;
    
    return 0;
}