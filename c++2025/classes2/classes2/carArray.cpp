//#include <iostream>
//#include <vector>
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
//		model(model), year(year) {
//	}
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
//	Car* cars1 = new Car[3];
//
//	cars1[0].setModel("Sonata");
//	cars1[0].setYear(2017);
//	cars1[1].setModel("���");
//	cars1[1].setYear(2020);
//	cars1[2].setModel("Ionic6");
//	cars1[2].setYear(2024);
//
//	for (int i = 0; i < 3; i++) {
//		cars1[i].carInfo();
//	}
//
//	delete[] cars1;
//
//	//�Ű������� �ִ� ������
//	Car* cars2 = new Car[3]{
//		Car("Sonata", 2017),
//		Car("���", 2020),
//		Car("Ionic6", 2024),
//	};
//
//	for (int i = 0; i < 3; i++) {
//		cars2[i].carInfo();
//	}
//
//	delete[] cars2;
//
//	//vector ���
//	/*vector<Car> cars = {
//		Car("Sonata", 2017),
//		Car("���", 2020),
//		Car("Ionic6", 2024),
//	};*/
//
//	cout << endl;
//	vector<Car> cars;
//
//	cars.push_back(Car("�ҳ�Ÿ", 2017));
//	cars.push_back(Car("���", 2020));
//	cars.push_back(Car("���̿���6", 2024));
//
//	//1. �Ϲ� for
//	for (int i = 0; i < cars.size(); i++) {
//		cars[i].carInfo();
//	}
//
//	//2. �ݺ��� ���
//	vector<Car>::iterator it;
//	for (it = cars.begin(); it != cars.end(); it++) {
//		it->carInfo(); //�����ͷ� ����
//	}
//
//	//���� ��� for��
//	/*for (auto& car : cars)
//		car.carInfo();*/
//
//	return 0;
//} 
