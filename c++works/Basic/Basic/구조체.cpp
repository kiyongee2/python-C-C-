#include <iostream>

using namespace std;

//����ü(���)
struct Person {
	char name[20];
	int age;
};

int main_struct() {
	//����ü - �ٸ� ���� �����͸� ������ �� �ִ� �ڷ� ����

	struct MyStruct {
		string name;
		string position;
		float height;
		float weight;
	};

	/*MyStruct player;
	player.name = "Ȳ�ι�";
	player.position = "�̵��ʴ�";
	player.height = 180.5;
	player.weight = 70.2;*/

	/*MyStruct player = {
		"Ȳ�ι�",
		"Striker",
		180.5,
		72.5
	};

	cout << player.name << endl;*/

	MyStruct player[2] = {
		{"�̰���", "Striker", 180.5, 72.5},
		{"Ȳ�ι�", "Striker", 180.5, 72.5}
	};

	cout << player[0].position << endl;

	// ����ü(enum) - ��ȣ ����� ����� �Ϳ� ���� �� �ٸ� ���
	enum weekday {��, ȭ, ��, ��, ��, ��, ��};

	weekday day = ��;

	cout << �� << endl;
	cout << �� + 2 << endl;

	// ���� ����ü - Person ��ü ����
	Person* person = new Person;

	cout << "����� �̸��� �Է��ϼ���\n";
	cin >> person->name;

	cout << "����� ���̸� �Է��ϼ���\n";
	cin >> person->age;

	cout << "�ȳ��ϼ���: " << person->name << "��~\n";
	cout << "����� " << person->age << "�� �̱���.\n";

	return 0;
}