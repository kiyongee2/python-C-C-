#ifndef CAR_H
#define CAR_H

#include <iostream>
using namespace std;

class Car {
private:
	string model; //모델 이름
	int year;  //연식

public:
	//생성자 초기화는 선언부에만 가능(기본생성자 포함)
	Car(string model = "", int year = 0);

	void setModel(string model);
	void setYear(int year);

	void carInfo();
};
#endif
