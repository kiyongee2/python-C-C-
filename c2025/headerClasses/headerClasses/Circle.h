#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"

class Circle {
private:
    Point center;  //중심점
    int radius;    //반지름
    const double PI = 3.141592; //원주율 상수

public:
    Circle(int x, int y, int radius);
    double getArea() const;
    void displayInfo() const;
};

#endif

