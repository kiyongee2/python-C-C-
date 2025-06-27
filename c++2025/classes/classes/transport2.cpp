#include <iostream>
using namespace std;

//객체 간 참조
//Bus 클래스 정의
class Bus {
private:
	int busNumber;  //버스 번호
	int passenger;  //승객수
	int money;      //수입
	const int fee;  //버스 요금(상수화)
public:
	//생성자 - 초기화 목록
	Bus(int busNumber, int fee = 1500) : busNumber(busNumber), 
		passenger(0), money(0), fee(fee) {}

	void take();        //승객을 태우다
	int getFee();       //요금 가져오기
	void displayInfo(); //버스의 정보 출력
};

void Bus::take() {
	money += fee;  //수익 증가
	passenger++;   //승객수 1 증가
}

int Bus::getFee() { return fee; }

void Bus::displayInfo() {
	cout << busNumber << "번 버스: "
		<< "수입 " << money << "원, "
		<< "승객 " << passenger << "명\n";
}

//Person 클래스 정의
class Person {
private:
	string name;  //이름
	int money;    //가진 돈

public:
	Person(string name, int money) : name(name), money(money) {}

	void takeBus(Bus& bus);  //버스를 탄다
	void displayInfo();      //사람의 정보 출력
};

void Person::takeBus(Bus& bus) { //버스 객체 참조자 사용
	if (money >= bus.getFee()) {
		bus.take();
		money -= bus.getFee(); //money에서 요금 뺀다.
	}
	else { 
		cout << "잔액 부족!\n";
	}
}

void Person::displayInfo() {
	cout << name << ": 잔액 " << money << "원\n";
}

int main()
{
	Person lee("이정후", 10000); //사람 인스턴스 생성
	Person shin("신유빈", 8000);
	Bus bus740(740, 1500);      //버스 인스턴스 생성 

	lee.takeBus(bus740); //버스 탑승
	shin.takeBus(bus740);
	shin.takeBus(bus740);

	lee.displayInfo();    //사람의 정보 출력
	shin.displayInfo();
	bus740.displayInfo(); //버스의 정보 출력

	cout << "-------------------------\n";

	//객체 배열로 관리
	Person ps[2] = { lee, shin };
	for (int i = 0; i < size(ps); i++) {
		ps[i].takeBus(bus740);
		ps[i].displayInfo();
	}


	return 0;
}
