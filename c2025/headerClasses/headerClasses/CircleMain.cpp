#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
    Circle c1(2, 3, 5);

    c1.displayInfo();
    cout << "���� ����: " << c1.getArea() << endl;
    cout << "-------------------------------\n";

    Circle c2(10, 10, 10);
    c2.displayInfo();
    cout << "���� ����: " << c2.getArea() << endl;

    return 0;
}

