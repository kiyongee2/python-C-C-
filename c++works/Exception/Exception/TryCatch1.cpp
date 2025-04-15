#include <iostream>
using namespace std;

int main() {

	int n1, n2;
	int quotient, remainder;

	cout << "첫번째 수 입력: ";
	cin >> n1;

	cout << "두번째 수 입력: ";
	cin >> n2;

	try {
		if (n2 == 0)
			//cout << n1 << "는(은) 0으로 나눌 수 없습니다\n";
			throw n1;  //catch()의 매개변수로 보냄
		quotient = n1 / (double)n2;  //몫 계산

		remainder = n1 % n2;         //나머지 계산

		cout << "몫: " << quotient << endl;
		cout << "나머지: " << remainder << endl;
	}
	catch (int e_n) {
		cout << n1 << "는(은) 0으로 나눌 수 없습니다.\n";
	}

	return 0;
}
