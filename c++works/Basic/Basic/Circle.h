#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();  //�Ҹ���

	void setRadius(int r) { radius = r; }
	double getArea();
};

#endif // !
