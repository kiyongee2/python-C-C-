#include <iostream>
#include <cstring>

using namespace std;

int main_input() {

	/*char name[20];
	cout << "�̸��� �Է��ϼ���\n";
	//cin >> name;   //������ �ִ� ��� ���� �߻�
	//cout << sizeof(name);
	cin.getline(name, sizeof(name));

	int money, point;
	cout << "���űݾ��� �Է��ϼ���\n";
	// �Է�
	cin >> money;
	//����Ʈ�� ���űݾ��� 2%
	point = money * 0.02;

	cout << name << "���� ���� ����Ʈ��" << point << "�� �Դϴ�.\n";

	// ��ȣ Ȯ�� ���α׷�
	/*char password[11];
	cout << "��ȣ�� ��ġ�ϸ� ���α׷��� ����˴ϴ�.\n";

	while (true) {
		cout << "��ȣ>";
		cin >> password;

		int result = (strcmp(password, "c++") == 0);
		if (result) {
			cout << "���α׷��� �����մϴ�.\n";
			break;
		}
		else {
			cout << "��ȣ�� Ʋ���ϴ�.\n";
		}
	}*/

	/*const char* s1 = "apple";
	const char* s2 = "banana";*/

	string s1 = "apple";
	string s2 = "banana";

	cout << s1;

	// 0 : ��ġ, -1 : ����ġ
	/*int result = strcmp(s1, s2);
	cout << result;*/

	return 0;
}