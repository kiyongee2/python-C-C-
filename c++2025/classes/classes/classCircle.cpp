#include <iostream>
using namespace std;

class Circle {
	int x, y;    //�߽���(x, y)
	int radius;
	const double PI = 3.141592;

public:
	Circle(int x, int y, int radius) {
		this->x = x;
		this->y = y;
		this->radius = radius;
	}

	void showInfo() {
		cout << "���� �߽���(" << this->x << ", " << this->y <<
			")�̰�, �������� " << radius << "�Դϴ�.\n";
	}
};

int main()
{
	Circle c1(2, 3, 5);

	c1.showInfo();

	return 0;
}
