//#include <iostream>
//using namespace std;
//
////객체 간 참조
////Bus 클래스 정의
//class Bus {
//private: 
//	int busNumber;  //버스 번호
//	int passenger;  //승객수
//	int money;      //수입
//public:
//	//생성자 - 초기화 목록
//	Bus(int busNumber) : passenger(0), money(0), busNumber(busNumber) {}
//
//	void take(int money); //승객을 태우다
//	void displayInfo();   //버스의 정보 출력
//};
//
//void Bus::take(int money) {
//	this->money += money;  //수익 증가
//	passenger++;           //승객수 1 증가
//}
//
//void Bus::displayInfo() {
//	cout << busNumber << "번 버스의 수입은 " << money <<
//		"원 이고, 승객수는 " << passenger << "명 입니다.\n";
//}
//
////Person 클래스 정의
//class Person {
//private:
//	string name;  //이름
//	int money;    //가진 돈
//
//public:
//	Person(string name, int money) : name(name), money(money){}
//
//	void takeBus(Bus& bus, int fee);  //버스를 탄다
//	void displayInfo();               //사람의 정보 출력
//};
//
//void Person::takeBus(Bus& bus, int fee) { //버스 객체 참조자 사용
//	bus.take(fee);      //버스에 요금 지불
//	this->money -= fee; //money에서 요금 뺀다.
//}
//
//void Person::displayInfo() {
//	cout << name << "님의 남은 돈은 " << money << "원 입니다.\n";
//}
//
//int main()
//{
//	Person lee("이정후", 10000); //사람 인스턴스 생성
//	Person shin("신유빈", 20000);
//	Bus bus740(740);            //버스 인스턴스 생성
//	int feeOfBus = 1500;        //버스 요금  
//
//	lee.takeBus(bus740, feeOfBus); //버스 탑승
//	shin.takeBus(bus740, feeOfBus);
//
//	lee.displayInfo();    //사람의 정보 출력
//	shin.displayInfo();
//	bus740.displayInfo(); //버스의 정보 출력
//
//	return 0;
//}
