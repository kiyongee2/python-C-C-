#include <iostream>
#include <string>
using namespace std;

//��� - ������
class Character {
public:
	Character() {
		cout << "Character Ŭ���� ������" << endl;
	}
	~Character() {
		cout << "Character Ŭ���� �Ҹ���" << endl;
	}
};

class Monster {
public:
	Monster() {
		cout << "Monster Ŭ���� ������" << endl;
	}
	~Monster() {
		cout << "Monster Ŭ���� �Ҹ���" << endl;
	}
};

class MonsterA : public Monster, Character {
private:
	int location[2]; //��ǥ ����

public:
	//�⺻������ : �ʱ�ȭ ���
	MonsterA() : MonsterA(0, 0) {
		cout << "MonsterA Ŭ���� ������" << endl;
		//MonsterA(0, 0); //�ʱ�ȭ ���� ����
	}

	MonsterA(int x, int y) : location{ x, y } {
		cout << "MonsterA Ŭ���� ������(�Ű����� �߰�)" << endl;
	}

	void showLocation() {
		cout << "��ġ(" << location[0] << ", " << location[1] << ")" << endl;
	}
};


int main()
{
	MonsterA forestMonster;   //�⺻ ������ ȣ��
	forestMonster.showLocation();

	MonsterA woodMonster(10, 20); //�Ű������� �ִ� ������ ȣ��
	woodMonster.showLocation();

	return 0;
}
