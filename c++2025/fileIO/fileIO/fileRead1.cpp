#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	//���� �б�
	ifstream f1("data.txt");
	string str; //���� ���� ����

	if (!f1.is_open()) {
		cerr << "������ �� �� �����ϴ�.\n";
		return 1;
	}

	while (getline(f1, str);) {
		cout << str << endl;
	}

	return 0;
}