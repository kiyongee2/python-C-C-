#include <iostream>
#include "Car.h"

Car::Car(string model, int year) { //생성자
	this->model = model;
	this->year = year;
}

void Car::carInfo() { //정보 출력 함수
	cout << "모델명: " << this->model <<
		", 연식: " << this->year << endl;
}

void Car::drive() {
	cout << this->model << "가 달립니다.\n";
}
