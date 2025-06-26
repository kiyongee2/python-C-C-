//#include <iostream>
//using namespace std;
//
//class Drink {
//protected:
//	string name;    //��ǰ��
//	int price;      //����
//	int quantity;   //����
//
//public:
//	Drink(string name, int price, int quantity) :
//		name(name), price(price), quantity(quantity){ }
//
//	int calcPrice() { return price * quantity; }
//	static void printTitle() {
//		cout << "��ǰ��\t����\t����\t�ݾ�\n";
//	}
//	void printData() {
//		cout << name << "\t" << price << "\t" <<
//				quantity << "\t" << calcPrice() << endl;
//	}
//};
//
////�Լ� ������(override) - ��ӹ޴� Ŭ�������� �Լ��� ������ ������
//class Alcohol : public Drink {
//private:
//	float alcper; //���� ����
//
//public:
//	Alcohol(string name, int price, int quantity, float alcper) :
//		Drink(name, price, quantity), alcper(alcper){ }
//
//	static void printTitle() {
//		cout << "��ǰ��(����[%])\t����\t����\t�ݾ�\n";
//	}
//	void printData() {
//		cout << name << "(" << alcper << ")\t" << price << "\t" <<
//			quantity << "\t" << calcPrice() << endl;
//	}
//};
//
//int main()
//{
//	//Drink �ν��Ͻ� ����
//	Drink coffee("Ŀ��", 2500, 4);
//	Drink tea("����", 3000, 3);
//	
//	/*cout << "========== ���� ��ǥ ==========\n";
//	Drink::printTitle();
//	coffee.printData();
//	tea.printData();
//	cout << endl;*/
//
//	Drink drinks[2] = {coffee, tea};
//	int total_drink = 0;
//
//	cout << "========== ���� ��ǥ ==========\n";
//	Drink::printTitle();
//	for (Drink drink : drinks) {
//		drink.printData();
//		total_drink += drink.calcPrice();
//	}
//	cout << "** ���� �հ� �ݾ�: " << total_drink << "�� **\n\n";
//		
//	//Alcohol �ν��Ͻ� ����
//	Alcohol soju("����", 4000, 2, 15.1f);
//	Alcohol beer("����", 2500, 3, 5.4f);
//
//	Alcohol alcohols[2] = { soju, beer };
//	int total_alcohol = 0;
//
//	Alcohol::printTitle();
//	for (Alcohol alcohol : alcohols) {
//		alcohol.printData();
//		total_alcohol += alcohol.calcPrice();
//	}
//	cout << "** ���� �հ� �ݾ�: " << total_alcohol << "�� **\n";
//		
//	/*int total;
//	total = coffee.calcPrice() + tea.calcPrice() + soju.calcPrice() + beer.calcPrice();*/
//
//	int total_sum = total_drink + total_alcohol;
//
//	cout << "******* ��ü �հ� �ݾ�: " << total_sum << "�� *******\n";
//	
//	return 0;
//}

