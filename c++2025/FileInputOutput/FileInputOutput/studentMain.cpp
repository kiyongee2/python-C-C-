#include <iostream>
#include <fstream>
#include <string>
#include "Student.h"
using namespace std;

int main() {

	ofstream fout("scorelist.txt");
	if (!fout) {
		cout << "파일을 열 수 없습니다.\n";
		return -1;
	}

	const int SIZE = 3;
	Student students[SIZE];

	//사용자 입력
	for (int i = 0; i < SIZE; i++) {
		string name;
		int eng, math;

		cout << i + 1 << "번째 학생의 이름: ";
		getline(cin, name);
		students[i].setName(name);

		cout << "영어 점수 입력: ";
		cin >> eng;
		students[i].setEng(eng);

		cout << "수학 점수 입력: ";
		cin >> math;
		students[i].setMath(math);

		cin.ignore(); //개행문자 제거
		students[i].calculateAvg(); //평균 함수 호출
	}

	//파일에 쓰기
	fout << "이름 영어 수학 평균\n";
	for (int i = 0; i < SIZE; i++) {
		fout << students[i].getName() << " "
			<< students[i].getEng() << " "
			<< students[i].getMath() << " "
			<< students[i].getAvg() << endl;
	}

	fout.close();

	return 0;
}