#include "MonsterA.h"

int main()
{
	cout << "[forestMonster 持失]" << endl;
	MonsterA forestMonster;
	forestMonster.showLocation();
	cout << endl;

	cout << "[woodMonster 持失]" << endl;
	MonsterA woodMonster(10, 20);
	woodMonster.showLocation();

	return 0;
}
