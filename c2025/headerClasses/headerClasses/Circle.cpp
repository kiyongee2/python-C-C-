#include <iostream>
#include "Circle.h"
using namespace std;

Circle::Circle(int x, int y, int radius) : center(x, y), radius(radius) {}

double Circle::getArea() const {
    return PI * radius * radius;
}

void Circle::displayInfo() const {
    cout << "���� �߽�(" << center.getX() << ", " << center.getY()
        << "), ������: " << radius << endl;
}
