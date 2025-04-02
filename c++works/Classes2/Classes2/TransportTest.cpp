//#include <iostream>
//#include <string>
//using namespace std;
//
//class Bus {
//private:
//	int busNumber;
//	int passenger;  //초기화
//	int money;
//	//int passenger=0, money = 0; 도 가능
//	//아래 초기화 목록 사용 권장 
//public:
//	// 생성자 : 초기화 목록
//	Bus(int busNumber) : passenger(0), money(0) {
//		this->busNumber = busNumber;
//	}
//
//	void take(int money) {
//		this->money += money;
//		passenger++;
//	}
//
//	void busInfo() {
//		cout << busNumber << "번 버스의 수입은 " << money <<
//			"원이고, 승객수는 " << passenger << "명 입니다.\n";
//	}
//};
//
//class Person {
//private:
//	string name;
//	int money;
//
//public:
//	Person(string name, int money) {
//		this->name = name;
//		this->money = money;
//	}
//
//	void takeBus(Bus &bus, int fee) { //Bus를 참조(&)로 받음
//		bus.take(fee);
//		this->money -= fee;
//	}
//
//	void personInfo() {
//		cout << name << "님의 남은 돈은 " << money << "원 입니다.\n";
//	}
//};
//
//int main()
//{
//	Person p1("신유빈", 10000); //사람 객체 1명 생성
//	Bus bus103(103);  //버스 객체 1대 생성
//	int feeOfBus = 1500;
//
//	Person p2("이정후", 20000); //사람 객체 1명 생성
//
//	p1.takeBus(bus103, feeOfBus); //버스 탑승(참조로 전달)
//	p2.takeBus(bus103, feeOfBus);
//
//	//정보 출력
//	p1.personInfo();
//	p2.personInfo();
//	bus103.busInfo();
//	
//	return 0;
//}
