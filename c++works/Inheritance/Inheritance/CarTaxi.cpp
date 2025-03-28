//#include <iostream>
//#include <string>
//using namespace std;
//
////상속 - 매개변수 있는 생성자
//class Car {
//private:
//	string serial;
//	int speed;
//
//public:
//	Car(string serial, int speed) {
//		this->serial = serial;
//		this->speed = speed;
//	}
//
//	string getSerial() {return serial;}
//	int getSpeed() {return speed;}
//	void carInfo() {
//		cout << "차량 번호: " << getSerial() << endl;
//		cout << "주행 속도: " << getSpeed() << endl;
//	}
//};
//
//class Taxi : public Car {
//private:
//	int passenger;
//
//public:
//	Taxi(int passenger, string serial, int speed) : Car(serial, speed) {
//		this->passenger = passenger;
//	}
//
//	int getPassenger() {return passenger;}
//	void carInfo() {  //부모 함수 재정의(Overriding)
//		cout << "차량 번호: " << getSerial() << endl;
//		cout << "주행 속도: " << getSpeed() << endl;
//		cout << "승객수: " << getPassenger() << endl;
//	}
//};
//
//int main()
//{
//	//Car 객체 생성
//	Car car1("02허 2424", 80);
//	car1.carInfo();
//	cout << "========================\n";
//
//	//Taxi 객체 생성
//	Taxi 카카오T(2, "123가 4567", 60);
//	카카오T.carInfo();
//
//	return 0;
//}