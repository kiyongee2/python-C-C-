#include <iostream>
#include <fstream>
#include <string>
#include "Student.h"
using namespace std;

int main() {

	ofstream fout("scorelist.txt");
	if (!fout) {
		cout << "������ �� �� �����ϴ�.\n";
		return -1;
	}

	const int SIZE = 3;
	Student students[SIZE];

	//����� �Է�
	for (int i = 0; i < SIZE; i++) {
		string name;
		int eng, math;

		cout << i + 1 << "��° �л��� �̸�: ";
		getline(cin, name);
		students[i].setName(name);

		cout << "���� ���� �Է�: ";
		cin >> eng;
		students[i].setEng(eng);

		cout << "���� ���� �Է�: ";
		cin >> math;
		students[i].setMath(math);

		cin.ignore(); //���๮�� ����
		students[i].calculateAvg(); //��� �Լ� ȣ��
	}

	//���Ͽ� ����
	fout << "�̸� ���� ���� ���\n";
	for (int i = 0; i < SIZE; i++) {
		fout << students[i].getName() << " "
			<< students[i].getEng() << " "
			<< students[i].getMath() << " "
			<< students[i].getAvg() << endl;
	}

	fout.close();

	return 0;
}