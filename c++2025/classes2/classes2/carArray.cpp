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
//	//생성자 초기화 목록(기본 생성자 포함)
//	Car(string model = "", int year = 0) :
//		model(model), year(year) {
//	}
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
//	Car* cars1 = new Car[3];
//
//	cars1[0].setModel("Sonata");
//	cars1[0].setYear(2017);
//	cars1[1].setModel("모닝");
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
//	//매개변수가 있는 생성자
//	Car* cars2 = new Car[3]{
//		Car("Sonata", 2017),
//		Car("모닝", 2020),
//		Car("Ionic6", 2024),
//	};
//
//	for (int i = 0; i < 3; i++) {
//		cars2[i].carInfo();
//	}
//
//	delete[] cars2;
//
//	//vector 사용
//	/*vector<Car> cars = {
//		Car("Sonata", 2017),
//		Car("모닝", 2020),
//		Car("Ionic6", 2024),
//	};*/
//
//	cout << endl;
//	vector<Car> cars;
//
//	cars.push_back(Car("소나타", 2017));
//	cars.push_back(Car("모닝", 2020));
//	cars.push_back(Car("아이오닉6", 2024));
//
//	//1. 일반 for
//	for (int i = 0; i < cars.size(); i++) {
//		cars[i].carInfo();
//	}
//
//	//2. 반복자 사용
//	vector<Car>::iterator it;
//	for (it = cars.begin(); it != cars.end(); it++) {
//		it->carInfo(); //포인터로 접근
//	}
//
//	//범위 기반 for문
//	/*for (auto& car : cars)
//		car.carInfo();*/
//
//	return 0;
//} 
