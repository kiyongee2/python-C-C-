#include <iostream>
#include "Bus.h"

using namespace std;

Bus::Bus(int busNumber, int FEE) : busNumber(busNumber),
	passenger(0), money(0), FEE(FEE){}

void Bus::take() {
	money += FEE;
	passenger++;
}

int Bus::getFEE() { return FEE; }

void Bus::displayInfo() {
	cout << busNumber << "¹ø ¹ö½º: ¼öÀÔ " << money
		<< "¿ø, ½Â°´¼ö: " << passenger << "¸í\n";
}
