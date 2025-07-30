#include <iostream>
#include "Bus.h"
using namespace std;

//생성자 초기화 목록
Bus::Bus(int busNumber, int FEE) : busNumber(busNumber),
	passenger(0), money(0), FEE(FEE) {}

void Bus::take() {
	money += FEE;  //수익 증가
	passenger++;   //승객수1 증가
}

int Bus::getFEE() { return FEE; }

void Bus::displayInfo() {
	cout << busNumber << "번 버스: "
		<< "수입 " << money << "원, "
		<< "승객 " << passenger << "명\n";
}
