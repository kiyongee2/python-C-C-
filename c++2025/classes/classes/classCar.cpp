//#include <iostream>
//using namespace std;
//
//class Car {
//private:
//	string model;  //�𵨸�
//	int year;      //����
//
//public:
//	Car(string model, int year) { //������
//		this->model = model;
//		this->year = year;
//	}
//
//	void carInfo() { //���� ��� �Լ�
//		cout << "�𵨸�: " << this->model <<
//			", ����: " << this->year << endl;
//	}
//
//	void drive() {
//		cout << this->model << "�� �޸��ϴ�.\n";
//	}
//};
//
//int main()
//{
//	Car car1("Ionic6", 2024);
//	car1.carInfo();
//	cout << "================================\n";
//	
//	//��ü �迭
//	Car carList[3] = {
//		Car("�ҳ�Ÿ", 2020),
//		Car("����Ƽ��", 2022),
//		Car("EV6", 2025)
//	};
//	//cout << size(carList) << endl;  //3
//
//	for (int i = 0; i < size(carList); i++) {
//		carList[i].carInfo();
//		carList[i].drive();
//	}
//	
//	return 0;
//}
