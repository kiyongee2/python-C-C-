#include <iostream>
using namespace std;

class Circle {
	int x, y;    //중심점(x, y)
	int radius;
	const double PI = 3.141592;

public:
	Circle(int x, int y, int radius) {
		this->x = x;
		this->y = y;
		this->radius = radius;
	}

	void showInfo() {
		cout << "원의 중심은(" << this->x << ", " << this->y <<
			")이고, 반지름은 " << radius << "입니다.\n";
	}
};

int main()
{
	Circle c1(2, 3, 5);

	c1.showInfo();

	return 0;
}
