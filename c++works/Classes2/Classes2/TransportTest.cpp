//#include <iostream>
//#include <string>
//using namespace std;
//
//class Bus {
//private:
//	int busNumber;
//	int passenger;  //�ʱ�ȭ
//	int money;
//	//int passenger=0, money = 0; �� ����
//	//�Ʒ� �ʱ�ȭ ��� ��� ���� 
//public:
//	// ������ : �ʱ�ȭ ���
//	Bus(int busNumber) : passenger(0), money(0) {
//		this->busNumber = busNumber;
//	}
//
//	void take(int money) {
//		this->money += money;
//		passenger++;
//	}
//
//	void busInfo() {
//		cout << busNumber << "�� ������ ������ " << money <<
//			"���̰�, �°����� " << passenger << "�� �Դϴ�.\n";
//	}
//};
//
//class Taxi {
//private:
//	string brand;
//	int passenger;
//	int money;
//
//public:
//	Taxi(string brand) : brand(brand), passenger(0), money(0) {}
//	void take(int money) {
//		this->money += money;
//		passenger++;
//	}
//	void taxiInfo() {
//		cout << brand << "�� ������ " << money <<
//			"�� �̰�, �°����� " << passenger << "�� �Դϴ�.\n";
//	}
//};
//
//class Person {
//private:
//	string name;
//	int money;
//
//public:
//	Person(string name, int money) {
//		this->name = name;
//		this->money = money;
//	}
//
//	void takeBus(Bus& bus, int fee) { //Bus�� ����(&)�� ����
//		bus.take(fee);
//		this->money -= fee;
//	}
//
//	void takeTaxi(Taxi& taxi, int fee) {
//		taxi.take(fee);
//		this->money -= fee;
//	}
//
//	void personInfo() {
//		cout << name << "���� ���� ���� " << money << "�� �Դϴ�.\n";
//	}
//};
//
//int main()
//{
//	Person p1("������", 10000); //��� ��ü 1�� ����
//	Person p2("������", 20000); //��� ��ü 1�� ����
//	Bus bus103(103);  //���� ��ü 1�� ����
//	Taxi īī��T("īī��T");  //�ý� ��ü 1�� ����
//	int feeOfBus = 1500;
//	int feeOfTaxi = 4800;
//
//	p1.takeBus(bus103, feeOfBus); //���� ž��(������ ����)
//	p2.takeBus(bus103, feeOfBus);
//
//	p1.takeTaxi(īī��T, feeOfTaxi);  //�ý� ž��
//	p2.takeTaxi(īī��T, feeOfTaxi);
//
//	//���� ���
//	p1.personInfo();
//	p2.personInfo();
//	bus103.busInfo();
//	īī��T.taxiInfo();
//	
//	return 0;
//}
