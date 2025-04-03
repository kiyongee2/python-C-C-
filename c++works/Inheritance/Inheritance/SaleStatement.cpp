//#include <iostream>
//#include <string>
//using namespace std;
//
////��� - ���� ��ǥ
//class Drink {
//protected: 
//	string name;   //��ǰ��
//	int price;     //����
//	int quantity;  //����
//
//public:
//	Drink(string name, int price, int quantity) {
//		this->name = name;
//		this->price = price;
//		this->quantity = quantity;
//	}
//
//	int calcPrice() {
//		return price * quantity;
//	};
//
//	void printTitle() {
//		cout << "��ǰ��\t����\t����\t�ݾ�\n";
//	}
//
//	void printData() {
//		cout << name << "\t" << price << "\t" << quantity <<
//					"\t" << calcPrice() << endl;
//	}
//};
//
//class Alcohol : public Drink{
//private:
//	float alcper;  //���� ����
//
//public:
//	Alcohol(float alcper, string name, int price, int quantity) : Drink(name, price, quantity) {
//		this->alcper = alcper;
//	}
//
//	void printTitle() {
//		cout << "��ǰ��(����[%])\t����\t����\t�ݾ�\n";
//	}
//
//	void printData() {
//		cout << name << "(" << alcper << ")\t" << price << "\t" <<
//			quantity << "\t" << calcPrice() << endl;
//	}
//};
//
//
//int main()
//{
//	Drink coffee("Ŀ��", 2500, 4);
//	Drink tea("����", 3000, 3);
//
//	cout << "============= ���� ��ǥ =============\n";
//	coffee.printTitle();
//	coffee.printData();
//	tea.printData();
//	cout << endl;
//
//	Alcohol soju(15.1f, "soju", 4000, 2);
//	soju.printTitle();
//	soju.printData();
//
//	int total;
//	total = coffee.calcPrice() + tea.calcPrice() + soju.calcPrice();
//	cout << "***** �հ� �ݾ�: " << total << "�� *****\n";
//
//	return 0;
//}