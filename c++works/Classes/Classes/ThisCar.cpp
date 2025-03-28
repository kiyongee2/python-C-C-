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
//	/*
//		생성자 
//		- 외부 입력을 this로 초기화(저장)
//		- 변수이름이 같아야 함
//	*/
//	Car(string model, int year) {
//		this->model = model;
//		this->year = year;
//	}
//	void drive();
//	void carInfo();
//};
//
//void Car::drive(){
//	cout << "차가 달립니다.\n";
//}
//
//void Car::carInfo() {
//	cout << "모델명: " << this->model << endl;
//	cout << "년식: " << this->year << endl;
//}
//
//int main()
//{
//	Car car1("Avante", 2016);  //car1 객체 생성
//
//	car1.drive();
//	car1.carInfo();
//	cout << "====================\n";
//
//	Car car2("Ionic6", 2023);  //car2 객체 생성
//	car2.drive();
//	car2.carInfo();
//
//	return 0;
//}
