#ifndef MONSTERA_H
#define MONSTERA_H

#include "Monster.h"
#include "Character.h"

class MonsterA : public Monster, public Character {
private:
	int location[2];

public:
	MonsterA();               // �⺻ ������
	MonsterA(int x, int y);   // �Ű����� ������

	void showLocation();      // ��ġ ���
};

#endif
