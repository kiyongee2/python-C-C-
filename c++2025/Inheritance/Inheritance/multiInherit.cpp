#include <iostream>
using namespace std;

class Character {
public:
	Character() {
		cout << "Character 클래스 생성자" << endl;
	}
	~Character() {
		cout << "Character 클래스 소멸자" << endl;
	}
};

class Monster {
public:
	Monster() {
		cout << "Monster 클래스 생성자" << endl;
	}
	~Monster() {
		cout << "Monster 클래스 소멸자" << endl;
	}
};

class MonsterA : public Monster, Character {
private:
	int location[2];

public:
	MonsterA() : MonsterA(0, 0) {
		cout << "MonsterA 클래스 생성자" << endl;
	}

	MonsterA(int x, int y) : location{ x, y } {
		cout << "MonsterA 클래스 생성자(매개변수 추가)" << endl;
	}

	void showLocation() {
		cout << "위치(" << location[0] << ", " <<
			location[1] << ")\n";
	}
};

int main()
{
	MonsterA forestMonster;
	forestMonster.showLocation();
	cout << endl;

	MonsterA woodMonster(10, 20);
	woodMonster.showLocation();

	return 0;
}
