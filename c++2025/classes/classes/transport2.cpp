#include <iostream>
using namespace std;

//��ü �� ����
//Bus Ŭ���� ����
class Bus {
private:
	int busNumber;  //���� ��ȣ
	int passenger;  //�°���
	int money;      //����
	const int fee;  //���� ���(���ȭ)
public:
	//������ - �ʱ�ȭ ���
	Bus(int busNumber, int fee = 1500) : busNumber(busNumber), 
		passenger(0), money(0), fee(fee) {}

	void take();        //�°��� �¿��
	int getFee();       //��� ��������
	void displayInfo(); //������ ���� ���
};

void Bus::take() {
	money += fee;  //���� ����
	passenger++;   //�°��� 1 ����
}

int Bus::getFee() { return fee; }

void Bus::displayInfo() {
	cout << busNumber << "�� ����: "
		<< "���� " << money << "��, "
		<< "�°� " << passenger << "��\n";
}

//Person Ŭ���� ����
class Person {
private:
	string name;  //�̸�
	int money;    //���� ��

public:
	Person(string name, int money) : name(name), money(money) {}

	void takeBus(Bus& bus);  //������ ź��
	void displayInfo();      //����� ���� ���
};

void Person::takeBus(Bus& bus) { //���� ��ü ������ ���
	if (money >= bus.getFee()) {
		bus.take();
		money -= bus.getFee(); //money���� ��� ����.
	}
	else { 
		cout << "�ܾ� ����!\n";
	}
}

void Person::displayInfo() {
	cout << name << ": �ܾ� " << money << "��\n";
}

int main()
{
	Person lee("������", 10000); //��� �ν��Ͻ� ����
	Person shin("������", 8000);
	Bus bus740(740, 1500);      //���� �ν��Ͻ� ���� 

	lee.takeBus(bus740); //���� ž��
	shin.takeBus(bus740);
	shin.takeBus(bus740);

	lee.displayInfo();    //����� ���� ���
	shin.displayInfo();
	bus740.displayInfo(); //������ ���� ���

	cout << "-------------------------\n";

	//��ü �迭�� ����
	Person ps[2] = { lee, shin };
	for (int i = 0; i < size(ps); i++) {
		ps[i].takeBus(bus740);
		ps[i].displayInfo();
	}


	return 0;
}
