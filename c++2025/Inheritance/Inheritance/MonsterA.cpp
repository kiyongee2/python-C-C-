#include "MonsterA.h"
#include <iostream>
using namespace std;

MonsterA::MonsterA() : Monster(), Character(), location{ 0, 0 } {
	cout << "MonsterA Ŭ���� ������" << endl;
}

MonsterA::MonsterA(int x, int y) : Monster(), Character(), location{ x, y } {
	cout << "MonsterA Ŭ���� ������(�Ű����� �߰�)" << endl;
}

void MonsterA::showLocation() {
	cout << "��ġ(" << location[0] << ", " << location[1] << ")\n";
}
