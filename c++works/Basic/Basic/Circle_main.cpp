//#include <iostream>
//#include "Circle.h"
//using namespace std;
//
//int main()
//{
//	//Circle c1;
//	//c1.radius = 3;
//
//	/*double area = c1.getArea();
//
//	cout << "c1 의 면적은 " << area << endl;
//
//	Circle c2(3);
//	area = c2.getArea();
//
//	cout << "c2 의 면적은 " << area << endl;*/
//
//	// 객체 배열
//	/*Circle circleArray[3];
//
//	circleArray[0].setRadius(10);
//	circleArray[1].setRadius(20);
//	circleArray[2].setRadius(30);*/
//
//	// 생성자로 객체 배열 초기화
//	/*Circle circleArray[3] = {
//		Circle(10),
//		Circle(20),
//		Circle(30)
//	};
//
//	for (int i = 0; i < 3; i++) {
//		cout << "Circle" << i << "의 면적은 "
//			<< circleArray[i].getArea() << endl;
//	}
//
//	Circle* p;
//	p = circleArray;
//
//	for (int i = 0; i < 3; i++) {
//		cout << "Circle" << i << "의 면적은 "
//			<< p->getArea() << endl;
//		p++;
//	}*/
//
//	// 동적 생성 및 반환
//	Circle* p, * q;
//	p = new Circle;
//	q = new Circle(30);
//	cout << p->getArea() << endl << q->getArea() << endl;
//	delete p;
//	delete q;
//
//	return 0;
//}