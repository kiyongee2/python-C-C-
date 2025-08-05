#include "MonsterA.h"
#include <iostream>
using namespace std;

MonsterA::MonsterA() : Monster(), Character(), location{ 0, 0 } {
	cout << "MonsterA 클래스 생성자" << endl;
}

MonsterA::MonsterA(int x, int y) : Monster(), Character(), location{ x, y } {
	cout << "MonsterA 클래스 생성자(매개변수 추가)" << endl;
}

void MonsterA::showLocation() {
	cout << "위치(" << location[0] << ", " << location[1] << ")\n";
}
