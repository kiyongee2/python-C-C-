#include <iostream>
#include <string>
using namespace std;

//상속 - 생성자
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
	int location[2]; //좌표 저장

public:
	//기본생성자 : 초기화 목록
	MonsterA() : MonsterA(0, 0) {
		cout << "MonsterA 클래스 생성자" << endl;
		//MonsterA(0, 0); //초기화 되지 않음
	}

	MonsterA(int x, int y) : location{ x, y } {
		cout << "MonsterA 클래스 생성자(매개변수 추가)" << endl;
	}

	void showLocation() {
		cout << "위치(" << location[0] << ", " << location[1] << ")" << endl;
	}
};


int main()
{
	MonsterA forestMonster;   //기본 생성자 호출
	forestMonster.showLocation();

	MonsterA woodMonster(10, 20); //매개변수가 있는 생성자 호출
	woodMonster.showLocation();

	return 0;
}
