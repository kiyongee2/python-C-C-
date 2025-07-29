#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"

class Circle {
private:
    Point center;  //�߽���
    int radius;    //������
    const double PI = 3.141592; //������ ���

public:
    Circle(int x, int y, int radius);
    double getArea() const;
    void displayInfo() const;
};

#endif

