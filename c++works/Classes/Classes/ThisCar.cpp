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
//	/*
//		������ 
//		- �ܺ� �Է��� this�� �ʱ�ȭ(����)
//		- �����̸��� ���ƾ� ��
//	*/
//	Car(string model, int year) {
//		this->model = model;
//		this->year = year;
//	}
//	void drive();
//	void carInfo();
//};
//
//void Car::drive(){
//	cout << "���� �޸��ϴ�.\n";
//}
//
//void Car::carInfo() {
//	cout << "�𵨸�: " << this->model << endl;
//	cout << "���: " << this->year << endl;
//}
//
//int main()
//{
//	Car car1("Avante", 2016);  //car1 ��ü ����
//
//	car1.drive();
//	car1.carInfo();
//	cout << "====================\n";
//
//	Car car2("Ionic6", 2023);  //car2 ��ü ����
//	car2.drive();
//	car2.carInfo();
//
//	return 0;
//}
