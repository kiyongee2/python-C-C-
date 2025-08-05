#ifndef MONSTERA_H
#define MONSTERA_H

#include "Monster.h"
#include "Character.h"

class MonsterA : public Monster, public Character {
private:
	int location[2];

public:
	MonsterA();               // 기본 생성자
	MonsterA(int x, int y);   // 매개변수 생성자

	void showLocation();      // 위치 출력
};

#endif
