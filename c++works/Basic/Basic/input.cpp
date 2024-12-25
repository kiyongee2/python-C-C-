/*#include <iostream>

using namespace std;

int main() {

	char name[20];
	cout << "이름을 입력하세요\n";
	//cin >> name;   //공백이 있는 경우 오류 발생
	cin.getline(name, sizeof(name));

	int money, point;
	cout << "구매금액을 입력하세요 ";
	// 입력
	cin >> money;
	//포인트는 구매금액의 2%
	point = money * 0.02;

	cout << name << "님 적립 포인트는" << point << "점 입니다.\n";

	return 0;
}*/