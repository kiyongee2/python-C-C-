#include <iostream>
using namespace std;

//ĳ���� Ŭ����
class character {
public:
	character() : hp(100), power(100) {};
protected:
	int hp;
	int power;
};

//�÷��̾� Ŭ����
class player : public character {
public:
	player() {};
};

//�⺻ ���� Ŭ����
class monster {
public:
	monster() {};
	void get_damage(int damage) {};
	void attack(player target_player()) {};
	void attack_special(player target_player); 
};

void monster::attack_special(player target_player){
	cout << "�⺻ ���� : ������ - 10 hp" << endl;
}

//a ���� Ŭ���� ���
class monster_a : public monster, character {
public:
	//��ӹ��� �Լ� �������̵�
	void attack_special(player target_player);
};

void monster_a::attack_special(player target_player)
{
	cout << "���ʱ� ���� : ������ - 15 hp" << endl;
}

//b ���� Ŭ���� ���
class monster_b : public monster, character {
public:
	//��ӹ��� �Լ� �������̵�
	void attack_special(player target_player);
};

void monster_b::attack_special(player target_player)
{
	cout << "���� ���� : ������ - 0 hp" << endl;
}

//c ���� Ŭ���� ���
class monster_c : public monster, character {
public:
	//��ӹ��� �Լ� �������̵�
	void attack_special(player target_player);
};

void monster_c::attack_special(player target_player)
{
	cout << "���� ���� ���� : ������ - 100 hp" << endl;
}

int main()
{
	player player1;

	monster_a forest_monster;
	monster_b tutorial_monster;
	monster_c boss_monster;

	cout << "���� �� ����" << endl;
	forest_monster.attack_special(player1);
	tutorial_monster.attack_special(player1);
	boss_monster.attack_special(player1);

	return 0;
} 


