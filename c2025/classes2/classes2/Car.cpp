#include <iostream>
#include "Car.h"

//생성자 - 초기화 목록
Car::Car(string model, int year) : 
			model(model), year(year) {}

void Car::setModel(string model) {
	this->model = model;
}

void Car::setYear(int year) {
	this->year = year;
}

void Car::carInfo() {
	cout << "모델명: " << model << endl;
	cout << "연식: " << year << endl;
}
