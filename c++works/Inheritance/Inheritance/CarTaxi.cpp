//#include <iostream>
//#include <string>
//using namespace std;
//
////��� - �Ű����� �ִ� ������
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
//		cout << "���� ��ȣ: " << getSerial() << endl;
//		cout << "���� �ӵ�: " << getSpeed() << endl;
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
//	void carInfo() {  //�θ� �Լ� ������(Overriding)
//		cout << "���� ��ȣ: " << getSerial() << endl;
//		cout << "���� �ӵ�: " << getSpeed() << endl;
//		cout << "�°���: " << getPassenger() << endl;
//	}
//};
//
//int main()
//{
//	//Car ��ü ����
//	Car car1("02�� 2424", 80);
//	car1.carInfo();
//	cout << "========================\n";
//
//	//Taxi ��ü ����
//	Taxi īī��T(2, "123�� 4567", 60);
//	īī��T.carInfo();
//
//	return 0;
//}