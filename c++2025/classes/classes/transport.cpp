//#include <iostream>
//using namespace std;
//
////��ü �� ����
////Bus Ŭ���� ����
//class Bus {
//private: 
//	int busNumber;  //���� ��ȣ
//	int passenger;  //�°���
//	int money;      //����
//public:
//	//������ - �ʱ�ȭ ���
//	Bus(int busNumber) : passenger(0), money(0), busNumber(busNumber) {}
//
//	void take(int money); //�°��� �¿��
//	void displayInfo();   //������ ���� ���
//};
//
//void Bus::take(int money) {
//	this->money += money;  //���� ����
//	passenger++;           //�°��� 1 ����
//}
//
//void Bus::displayInfo() {
//	cout << busNumber << "�� ������ ������ " << money <<
//		"�� �̰�, �°����� " << passenger << "�� �Դϴ�.\n";
//}
//
////Person Ŭ���� ����
//class Person {
//private:
//	string name;  //�̸�
//	int money;    //���� ��
//
//public:
//	Person(string name, int money) : name(name), money(money){}
//
//	void takeBus(Bus& bus, int fee);  //������ ź��
//	void displayInfo();               //����� ���� ���
//};
//
//void Person::takeBus(Bus& bus, int fee) { //���� ��ü ������ ���
//	bus.take(fee);      //������ ��� ����
//	this->money -= fee; //money���� ��� ����.
//}
//
//void Person::displayInfo() {
//	cout << name << "���� ���� ���� " << money << "�� �Դϴ�.\n";
//}
//
//int main()
//{
//	Person lee("������", 10000); //��� �ν��Ͻ� ����
//	Person shin("������", 20000);
//	Bus bus740(740);            //���� �ν��Ͻ� ����
//	int feeOfBus = 1500;        //���� ���  
//
//	lee.takeBus(bus740, feeOfBus); //���� ž��
//	shin.takeBus(bus740, feeOfBus);
//
//	lee.displayInfo();    //����� ���� ���
//	shin.displayInfo();
//	bus740.displayInfo(); //������ ���� ���
//
//	return 0;
//}
