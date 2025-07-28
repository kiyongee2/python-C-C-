//#include <iostream>
//using namespace std;
//
//class Car {
//private:
//	string model;
//	int year;
//
//public:
//	//생성자 초기화 목록(기본 생성자 포함)
//	Car(string model = "", int year = 0) : 
//				model(model), year(year) {}
//
//	//설정자
//	void setModel(string model) { this->model = model; }
//	void setYear(int year) { this->year = year; }
//
//	void carInfo() {
//		cout << "모델명: " << this->model << endl;
//		cout << "년식: " << this->year << endl;
//	};
//};
//
//int main()
//{
//	//동적 객체 생성 - 기본 생성자
//	Car* car1 = new Car();
//	car1->setModel("Sonata");
//	car1->setYear(2021);
//	car1->carInfo();
//
//	//매개변수가 있는 생성자
//	Car* car2 = new Car("Ionic6", 2024);
//	car2->carInfo();
//
//	delete car1;  //객체 반환
//	delete car2;
//
//	return 0;
//}
