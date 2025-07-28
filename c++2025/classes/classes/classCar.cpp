//#include <iostream>
//using namespace std;
//
//class Car {
//private:
//	string model;  //모델명
//	int year;      //연식
//
//public:
//	Car(string model, int year) { //생성자
//		this->model = model;
//		this->year = year;
//	}
//
//	void carInfo() { //정보 출력 함수
//		cout << "모델명: " << this->model <<
//			", 연식: " << this->year << endl;
//	}
//
//	void drive() {
//		cout << this->model << "가 달립니다.\n";
//	}
//};
//
//int main()
//{
//	Car car1("Ionic6", 2024);
//	car1.carInfo();
//	cout << "================================\n";
//	
//	//객체 배열
//	Car carList[3] = {
//		Car("소나타", 2020),
//		Car("스포티지", 2022),
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
