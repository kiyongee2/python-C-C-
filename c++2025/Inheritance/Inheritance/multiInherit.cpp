//#include <iostream>
//using namespace std;
//
//class Character {
//public:
//	Character() {
//		cout << "Character 클래스 생성자" << endl;
//	}
//	~Character() {
//		cout << "Character 클래스 소멸자" << endl;
//	}
//};
//
//class Monster {
//public:
//	Monster() {
//		cout << "Monster 클래스 생성자" << endl;
//	}
//	~Monster() {
//		cout << "Monster 클래스 소멸자" << endl;
//	}
//};
//
////Monster 와 Character를 다중 상속 받은 MonsterA
//class MonsterA : public Monster, Character {
//private:
//	int location[2]; //좌표
//
//public:
//	//기본 생성자 초기화 목록
//	MonsterA() : Monster(), Character(), location{0, 0}{
//		cout << "MonsterA 클래스 생성자" << endl;
//	}
//
//	//매개변수가 있는 생성자 목록
//	MonsterA(int x, int y) : Monster(), Character(), location{ x, y } {
//		cout << "MonsterA 클래스 생성자(매개변수 추가)" << endl;
//	}
//
//	//좌표 출력
//	void showLocation() {
//		cout << "위치(" << location[0] << ", " <<
//			location[1] << ")\n";
//	}
//};
//
//int main()
//{
//	//기본 생성자 호출
//	cout << "[forestMonster 생성]" << endl;
//	MonsterA forestMonster;
//	forestMonster.showLocation();
//	cout << endl;
//
//	//매개변수가 있는 생성자 호출
//	cout << "[woodMonster 생성]" << endl;
//	MonsterA woodMonster(10, 20);
//	woodMonster.showLocation();
//
//	return 0;
//}
