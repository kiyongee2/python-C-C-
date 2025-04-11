#include <iostream>
#include <string>
using namespace std;

//Car 클래스 정의
class Car{
private:
	string model;
	int year;

public:
	/*Car(string model, int year) {
		this->model = model;
		this->year = year;
	}*/
	Car(string model, int year) : model(model), year(year) {}
	void drive();
	void carInfo();
};

void Car::drive(){
	cout << "차가 달립니다.\n";
}

void Car::carInfo() {
	cout << "모델명: " << this->model << endl;
	cout << "년식: " << this->year << endl;
}

int main()
{
	//객체 배열 생성
	Car* cars = new Car[3]{
		Car("Sonata", 2017),
		Car("Ionic6", 2023),
		Car("EV3", 2024)
	};

	//인덱싱 조회
	/*cars[0].carInfo();
	cars[1].carInfo();
	cars[2].carInfo();*/

	//전체 출력
	for (int i = 0; i < 3; i++) {
		//객체 배열은 점 연산자 사용
		cars[i].carInfo();
		cars[i].drive();
		cout << "-------------------\n";
	}

	delete [] cars;  //객체 배열 반환
	
	return 0;
}