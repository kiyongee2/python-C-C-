#include <iostream>
#include <cstring>

using namespace std;

int main_input() {

	/*char name[20];
	cout << "이름을 입력하세요\n";
	//cin >> name;   //공백이 있는 경우 오류 발생
	//cout << sizeof(name);
	cin.getline(name, sizeof(name));

	int money, point;
	cout << "구매금액을 입력하세요\n";
	// 입력
	cin >> money;
	//포인트는 구매금액의 2%
	point = money * 0.02;

	cout << name << "님의 적립 포인트는" << point << "점 입니다.\n";

	// 암호 확인 프로그램
	/*char password[11];
	cout << "암호가 일치하면 프로그램이 종료됩니다.\n";

	while (true) {
		cout << "암호>";
		cin >> password;

		int result = (strcmp(password, "c++") == 0);
		if (result) {
			cout << "프로그램을 종료합니다.\n";
			break;
		}
		else {
			cout << "암호가 틀립니다.\n";
		}
	}*/

	/*const char* s1 = "apple";
	const char* s2 = "banana";*/

	string s1 = "apple";
	string s2 = "banana";

	cout << s1;

	// 0 : 일치, -1 : 불일치
	/*int result = strcmp(s1, s2);
	cout << result;*/

	return 0;
}