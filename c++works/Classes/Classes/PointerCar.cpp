//#include <iostream>
//using namespace std;
//
////Car 클래스 정의
//class Car{
//private:
//	string model;
//	int year;
//
//public:
//	//생성자 - this로 초기화
//	Car(string model, int year) {
//		this->model = model;
//		this->year = year;
//	}
//	//멤버 함수
//	void carInfo();
//	void drive();
//};
//
//void Car::carInfo() {
//	cout << "모델명: " << this->model << endl;
//	cout << "년식: " << this->year << endl;
//}
//
//void Car::drive() {
//	cout << "차가 달립니다.\n";
//}
//
//int main()
//{
//	//동적 객체 생성
//	Car* car1 = new Car("Sonata", 2017);
//	car1->carInfo();
//	car1->drive();
//
//	cout << "-------------------\n";
//
//	Car* car2 = new Car("EV3", 2024);
//	car2->carInfo();
//	car2->drive();
//
//	delete car1;  //객체 반환
//	delete car2;
//
//	return 0;
//}
