#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;

class Car {
private:
	string model;  //�𵨸�
	int year;      //����

public:
	Car(string model, int year);

	void carInfo();

	void drive();
};
#endif // !CAR_H
