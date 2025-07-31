#include <iostream>
#include "Student.h"

void showInfo(Student& st) { //참조자 사용해야 함
	cout << "이름: " << st.name << ", ";
	cout << "학년: " << st.grade << ", ";
	cout << "주소: " << st.address << endl;
}

/*
void inputStudent(Student& st) {
	cout << "이름 입력: ";
	getline(cin, st.name);

	cout << "학년 입력: ";
	cin >> st.grade;
	cin.ignore();  // 개행 문자 제거

	cout << "주소 입력: ";
	getline(cin, st.address);
}
*/