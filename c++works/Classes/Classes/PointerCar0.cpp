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
//	//�⺻ ������
//	Car() {};
//
//	//��� �Լ�
//	void setModel(string model);
//	void setYear(int year);
//	void carInfo();
//	void drive();
//};
//
//void Car::setModel(string model) {
//	this->model = model;
//}
//
//void Car::setYear(int year) {
//	this->year = year;
//}
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
//	Car* car1 = new Car();
//	car1->setModel("Sonata");
//	car1->setYear(2017);
//	car1->carInfo();
//	car1->drive();
//
//	cout << "-------------------\n";
//
//	Car* car2 = new Car();
//	car2->setModel("EV3");
//	car2->setYear(2024);
//	car2->carInfo();
//	car2->drive();
//
//	delete car1;  //��ü ��ȯ
//	delete car2;
//
//	return 0;
//}