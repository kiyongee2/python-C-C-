#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	//파일 읽기
	ifstream f1("data.txt");
	string str; //읽은 내용 저장

	if (!f1.is_open()) {
		cerr << "파일을 열 수 없습니다.\n";
		return 1;
	}

	while (getline(f1, str);) {
		cout << str << endl;
	}

	return 0;
}