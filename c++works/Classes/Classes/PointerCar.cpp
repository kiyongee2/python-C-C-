//#include <iostream>
//using namespace std;
//
////Car Ŭ���� ����
//class Car{
//private:
//	string model;
//	int year;
//
//public:
//	//������ - this�� �ʱ�ȭ
//	Car(string model, int year) {
//		this->model = model;
//		this->year = year;
//	}
//	//��� �Լ�
//	void carInfo();
//	void drive();
//};
//
//void Car::carInfo() {
//	cout << "�𵨸�: " << this->model << endl;
//	cout << "���: " << this->year << endl;
//}
//
//void Car::drive() {
//	cout << "���� �޸��ϴ�.\n";
//}
//
//int main()
//{
//	//���� ��ü ����
//	Car* car1 = new Car("Sonata", 2017);
//	car1->carInfo();
//	car1->drive();
//
//	cout << "-------------------\n";
//
//	Car* car2 = new Car("EV3", 2024);
//	car2->carInfo();
//	car2->drive();
//
//	delete car1;  //��ü ��ȯ
//	delete car2;
//
//	return 0;
//}
