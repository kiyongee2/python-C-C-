//#include <iostream>
//using namespace std;
//
////캐릭터 클래스
//class character {
//protected:
//	int hp;
//	int power;
//	int location[2];
//	int level;
//
//public:
//	character() : hp(100), power(100), location{ 0, 0 }, level(1) {};
//	int get_level() { return level; };
//	void move(int x, int y) {
//		location[0] = x;
//		location[1] = y;
//		cout << location[0] << ", " << location[1] << "로 이동" << endl;
//	}
//	//매개변수로 x, y 배열과 배열 크기를 전달받음
//	void move(int x[], int y[], int spot_count) {
//		for (int i = 0; i < spot_count; ++i) {
//			location[0] = x[i];
//			location[1] = y[i];
//			cout << i+1 << "번째:" << location[0] << 
//				", " << location[1] << "로 이동" << endl;
//		}
//	}
//};
//
////플레이어 클래스
//class player : public character {
//public:
//	player() {};
//};
//
////기본 몬스터 클래스
//class monster {
//public:
//	monster() {};
//	void get_damage(int damage) {};
//	void attack(player target_player) {};
//	virtual void attack_special(player target_player); 
//};
//
//void monster::attack_special(player target_player){
//	cout << "기본 공격 : 데미지 - 10 hp" << endl;
//}
//
////a 몬스터 클래스 상속
//class monster_a : public monster, character {
//public:
//	//상속받은 함수 오버라이딩
//	void attack_special(player target_player);
//};
//
//void monster_a::attack_special(player target_player)
//{
//	cout << "인탱글 공격 : 데미지 - 15 hp" << endl;
//}
//
////b 몬스터 클래스 상속
//class monster_b : public monster, character {
//public:
//	//상속받은 함수 오버라이딩
//	void attack_special(player target_player);
//};
//
//void monster_b::attack_special(player target_player)
//{
//	cout << "가상 공격 : 데미지 - 0 hp" << endl;
//}
//
////몬스터 C는 기본 Monster 클래스로부터 상속
//class monster_c : public monster, public character {
//public:
//	//상속받은 함수 오버라이딩
//	void attack_special(player target_player);
//	monster_c operator+(monster_c& operand);
//	void set_level(int level_value) { level = level_value; };
//};
//
////덧셈 연산자 오버로딩 정의
//monster_c monster_c::operator+(monster_c& operand) {
//	monster_c result_monster;
//	result_monster.set_level(level + operand.get_level());
//	return result_monster;
//}
//
//void monster_c::attack_special(player target_player)
//{
//	cout << "강력 뇌전 공격 : 데미지 - 100 hp" << endl;
//}
//
//int main()
//{
//	/*player player1;
//	monster_a forest_monster;
//	monster_b tutorial_monster;
//	monster_c boss_monster;
//
//	cout << "몬스터 총 공격" << endl;
//	forest_monster.attack_special(player1);
//	tutorial_monster.attack_special(player1);
//	boss_monster.attack_special(player1);*/
//
//	character character_obj;
//	int x_list[3] = { 10, 15, 20 };
//	int y_list[3] = { 10, 15, 20 };
//
//	character_obj.move(10, 10);
//	cout << endl;
//
//	character_obj.move(x_list, y_list, 3);
//
//	//연산자 오버로딩
//	monster_c monster_c_obj1, monster_c_obj2;
//	monster_c_obj2.set_level(2);
//	monster_c new_monster_c_obj = monster_c_obj1 + monster_c_obj2;
//
//	cout << "합체전 몬스터C #1 Level[" << monster_c_obj1.get_level()
//		<< "], 몬스터C #2 Level[" << monster_c_obj2.get_level() << "]" << endl;
//
//	cout << "합체 후 몬스터C Level[" << new_monster_c_obj.get_level()<< "]" << endl;
//
//	return 0;
//} 