#include <iostream>
#include <string> //getline() �Լ� ���
using namespace std;

/*
	������ �Է�
	- cin >> ����
	- cin ��Ʈ������ �о�� �����͸� ������ ���� ����
*/

int main()
{
	string name;     //�̸��� ������ ����
	string address;  //�ּҸ� ������ ������ ����

	cout << "�̸� �Է�: ";
	cin >> name;

	cout << "�ּ� �Է�: ";
	//cin >> address;
	cin.ignore();  //���� ����('\n') ����(����) 
	getline(cin, address);

	cout << name << "�� ȯ���մϴ�.\n";
	cout << "�ּ�: " << address << endl;

	return 0;
}
