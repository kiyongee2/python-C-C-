#include <iostream>
#include <string> //getline() 함수 사용
using namespace std;

/*
	데이터 입력
	- cin >> 변수
	- cin 스트림으로 읽어온 데이터를 저장할 변수 지정
*/

int main()
{
	string name;     //이름을 저장할 변수
	string address;  //주소를 저장할 문자형 변수

	cout << "이름 입력: ";
	cin >> name;

	cout << "주소 입력: ";
	//cin >> address;
	cin.ignore();  //개행 문자('\n') 유지(무시) 
	getline(cin, address);

	cout << name << "님 환영합니다.\n";
	cout << "주소: " << address << endl;

	return 0;
}
