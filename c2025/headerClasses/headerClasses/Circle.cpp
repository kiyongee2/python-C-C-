#include <iostream>
#include "Circle.h"
using namespace std;

Circle::Circle(int x, int y, int radius) : center(x, y), radius(radius) {}

double Circle::getArea() const {
    return PI * radius * radius;
}

void Circle::displayInfo() const {
    cout << "원의 중심(" << center.getX() << ", " << center.getY()
        << "), 반지름: " << radius << endl;
}
