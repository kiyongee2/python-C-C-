//#include <iostream>
//using namespace std;
//
//class Character {
//public:
//	Character() {
//		cout << "Character Ŭ���� ������" << endl;
//	}
//	~Character() {
//		cout << "Character Ŭ���� �Ҹ���" << endl;
//	}
//};
//
//class Monster {
//public:
//	Monster() {
//		cout << "Monster Ŭ���� ������" << endl;
//	}
//	~Monster() {
//		cout << "Monster Ŭ���� �Ҹ���" << endl;
//	}
//};
//
////Monster �� Character�� ���� ��� ���� MonsterA
//class MonsterA : public Monster, Character {
//private:
//	int location[2]; //��ǥ
//
//public:
//	//�⺻ ������ �ʱ�ȭ ���
//	MonsterA() : Monster(), Character(), location{0, 0}{
//		cout << "MonsterA Ŭ���� ������" << endl;
//	}
//
//	//�Ű������� �ִ� ������ ���
//	MonsterA(int x, int y) : Monster(), Character(), location{ x, y } {
//		cout << "MonsterA Ŭ���� ������(�Ű����� �߰�)" << endl;
//	}
//
//	//��ǥ ���
//	void showLocation() {
//		cout << "��ġ(" << location[0] << ", " <<
//			location[1] << ")\n";
//	}
//};
//
//int main()
//{
//	//�⺻ ������ ȣ��
//	cout << "[forestMonster ����]" << endl;
//	MonsterA forestMonster;
//	forestMonster.showLocation();
//	cout << endl;
//
//	//�Ű������� �ִ� ������ ȣ��
//	cout << "[woodMonster ����]" << endl;
//	MonsterA woodMonster(10, 20);
//	woodMonster.showLocation();
//
//	return 0;
//}
