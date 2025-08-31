
#include "Car.h"

Car::Car(string model, int year) {
	this->model = model;
	this->year = year;
}

void Car::setModel(string model) {
	this->model = model;
}

void Car::setYear(int year) {
	this->year = year;
}

void Car::carInfo() {
	cout << "¸ðµ¨¸í: " << model << endl;
	cout << "¿¬½Ä: " << year << endl;
}