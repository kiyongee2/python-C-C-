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
//	int getPassenger() {return passenger;}
//};
//
//int main()
//{
//	Taxi 카카오T(2, "123가 4567", 60);
//
//	cout << "승객: " << 카카오T.getPassenger() << endl;
//	cout << "차량번호: " << 카카오T.getSerial() << endl;
//	cout << "주행속도: " << 카카오T.getSpeed() << endl;
//
//	return 0;
//}