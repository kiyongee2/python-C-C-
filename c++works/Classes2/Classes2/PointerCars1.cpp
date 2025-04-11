#include <iostream>
#include <string>
using namespace std;

//Car Ŭ���� ����
class Car{
private:
	string model;
	int year;

public:
	/*Car(string model, int year) {
		this->model = model;
		this->year = year;
	}*/
	Car(string model, int year) : model(model), year(year) {}
	void drive();
	void carInfo();
};

void Car::drive(){
	cout << "���� �޸��ϴ�.\n";
}

void Car::carInfo() {
	cout << "�𵨸�: " << this->model << endl;
	cout << "���: " << this->year << endl;
}

int main()
{
	//��ü �迭 ����
	Car* cars = new Car[3]{
		Car("Sonata", 2017),
		Car("Ionic6", 2023),
		Car("EV3", 2024)
	};

	//�ε��� ��ȸ
	/*cars[0].carInfo();
	cars[1].carInfo();
	cars[2].carInfo();*/

	//��ü ���
	for (int i = 0; i < 3; i++) {
		//��ü �迭�� �� ������ ���
		cars[i].carInfo();
		cars[i].drive();
		cout << "-------------------\n";
	}

	delete [] cars;  //��ü �迭 ��ȯ
	
	return 0;
}