//#include <iostream>
//using namespace std;
//
////Car Ŭ���� ����
//class Car {
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
//	//���� ��ü �迭 ����
//	Car* cars = new Car[3];
//	//�ε����� ����
//	cars[0].setModel("Sonata");
//	cars[0].setYear(2017);
//	cars[1].setModel("Ionic6");
//	cars[1].setYear(2023);
//	cars[2].setModel("EV3");
//	cars[2].setYear(2024);
//
//	//��ü ���
//	for (int i = 0; i < 3; i++) {
//		cars[i].carInfo();
//		cars[i].drive();
//		cout << "-------------------\n";
//	}
//
//	delete [] cars;  //���� ��ü �迭 ��ȯ
//
//	return 0;
//}
