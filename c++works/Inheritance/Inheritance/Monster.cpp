//#include <iostream>
//using namespace std;
//
////ĳ���� Ŭ����
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
//		cout << location[0] << ", " << location[1] << "�� �̵�" << endl;
//	}
//	//�Ű������� x, y �迭�� �迭 ũ�⸦ ���޹���
//	void move(int x[], int y[], int spot_count) {
//		for (int i = 0; i < spot_count; ++i) {
//			location[0] = x[i];
//			location[1] = y[i];
//			cout << i+1 << "��°:" << location[0] << 
//				", " << location[1] << "�� �̵�" << endl;
//		}
//	}
//};
//
////�÷��̾� Ŭ����
//class player : public character {
//public:
//	player() {};
//};
//
////�⺻ ���� Ŭ����
//class monster {
//public:
//	monster() {};
//	void get_damage(int damage) {};
//	void attack(player target_player) {};
//	virtual void attack_special(player target_player); 
//};
//
//void monster::attack_special(player target_player){
//	cout << "�⺻ ���� : ������ - 10 hp" << endl;
//}
//
////a ���� Ŭ���� ���
//class monster_a : public monster, character {
//public:
//	//��ӹ��� �Լ� �������̵�
//	void attack_special(player target_player);
//};
//
//void monster_a::attack_special(player target_player)
//{
//	cout << "���ʱ� ���� : ������ - 15 hp" << endl;
//}
//
////b ���� Ŭ���� ���
//class monster_b : public monster, character {
//public:
//	//��ӹ��� �Լ� �������̵�
//	void attack_special(player target_player);
//};
//
//void monster_b::attack_special(player target_player)
//{
//	cout << "���� ���� : ������ - 0 hp" << endl;
//}
//
////���� C�� �⺻ Monster Ŭ�����κ��� ���
//class monster_c : public monster, public character {
//public:
//	//��ӹ��� �Լ� �������̵�
//	void attack_special(player target_player);
//	monster_c operator+(monster_c& operand);
//	void set_level(int level_value) { level = level_value; };
//};
//
////���� ������ �����ε� ����
//monster_c monster_c::operator+(monster_c& operand) {
//	monster_c result_monster;
//	result_monster.set_level(level + operand.get_level());
//	return result_monster;
//}
//
//void monster_c::attack_special(player target_player)
//{
//	cout << "���� ���� ���� : ������ - 100 hp" << endl;
//}
//
//int main()
//{
//	/*player player1;
//	monster_a forest_monster;
//	monster_b tutorial_monster;
//	monster_c boss_monster;
//
//	cout << "���� �� ����" << endl;
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
//	//������ �����ε�
//	monster_c monster_c_obj1, monster_c_obj2;
//	monster_c_obj2.set_level(2);
//	monster_c new_monster_c_obj = monster_c_obj1 + monster_c_obj2;
//
//	cout << "��ü�� ����C #1 Level[" << monster_c_obj1.get_level()
//		<< "], ����C #2 Level[" << monster_c_obj2.get_level() << "]" << endl;
//
//	cout << "��ü �� ����C Level[" << new_monster_c_obj.get_level()<< "]" << endl;
//
//	return 0;
//} 