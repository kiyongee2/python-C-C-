//#include <iostream>
//using namespace std;
//
//class Car {
//private:
//	string model;
//	int year;
//
//public:
//	//������ �ʱ�ȭ ���(�⺻ ������ ����)
//	Car(string model = "", int year = 0) : 
//				model(model), year(year) {}
//
//	//������
//	void setModel(string model) { this->model = model; }
//	void setYear(int year) { this->year = year; }
//
//	void carInfo() {
//		cout << "�𵨸�: " << this->model << endl;
//		cout << "���: " << this->year << endl;
//	};
//};
//
//int main()
//{
//	//���� ��ü ���� - �⺻ ������
//	Car* car1 = new Car();
//	car1->setModel("Sonata");
//	car1->setYear(2021);
//	car1->carInfo();
//
//	//�Ű������� �ִ� ������
//	Car* car2 = new Car("Ionic6", 2024);
//	car2->carInfo();
//
//	delete car1;  //��ü ��ȯ
//	delete car2;
//
//	return 0;
//}
