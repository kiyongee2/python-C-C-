#include "MonsterA.h"

int main()
{
	cout << "[forestMonster ����]" << endl;
	MonsterA forestMonster;
	forestMonster.showLocation();
	cout << endl;

	cout << "[woodMonster ����]" << endl;
	MonsterA woodMonster(10, 20);
	woodMonster.showLocation();

	return 0;
}
