//#include <iostream>
//using namespace std;
//
////Car 클래스 정의
//class Car {
//private:
//	string model;
//	int year;
//
//public:
//	//기본 생성자
//	Car() {};
//
//	//멤버 함수
//	void setModel(string model);
//	void setYear(int year);
//	void carInfo();
//	void drive();
//};
//
//void Car::setModel(string model) {
//	this->model = model;
//}
//
//void Car::setYear(int year) {
//	this->year = year;
//}
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
//	//동적 객체 배열 생성
//	Car* cars = new Car[3];
//	//인덱스로 저장
//	cars[0].setModel("Sonata");
//	cars[0].setYear(2017);
//	cars[1].setModel("Ionic6");
//	cars[1].setYear(2023);
//	cars[2].setModel("EV3");
//	cars[2].setYear(2024);
//
//	//전체 출력
//	for (int i = 0; i < 3; i++) {
//		cars[i].carInfo();
//		cars[i].drive();
//		cout << "-------------------\n";
//	}
//
//	delete [] cars;  //동적 객체 배열 반환
//
//	return 0;
//}
