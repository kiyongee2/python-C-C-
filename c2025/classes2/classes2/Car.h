#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;

class Car {
private:
	string model;  //모델명
	int year;      //연식

public:
	//생성자 초기화는 선언부에만 명시함
	Car(string model = "", int year = 0);

	void setModel(string model);
	void setYear(int year);
	void carInfo();
};
#endif

