#include <iostream>
#include "Student.h"

void showInfo(Student& st) { //������ ����ؾ� ��
	cout << "�̸�: " << st.name << ", ";
	cout << "�г�: " << st.grade << ", ";
	cout << "�ּ�: " << st.address << endl;
}

/*
void inputStudent(Student& st) {
	cout << "�̸� �Է�: ";
	getline(cin, st.name);

	cout << "�г� �Է�: ";
	cin >> st.grade;
	cin.ignore();  // ���� ���� ����

	cout << "�ּ� �Է�: ";
	getline(cin, st.address);
}
*/