#include <iostream>
#include <vector>
using namespace std;

/*int square(int x) {
	return x * x;
}*/
//inline 함수 - 함수 호출이 일어나지 않음
//프로그램의 실행 속도 저하를 막기 위한 기능
int square(int x) { return x * x; }

int main()
{
	auto ch = 'K'; //문자형
	auto num = 12; //정수형
	auto unit = 2.54; //실수형
	auto* ip = &num;  //정수형 포인터

	cout << ch << ", " << num << ", " << unit << endl;
	cout << *ip << endl;

	//함수의 리턴 타입
	auto value = square(9);
	cout << value << endl;

	//벡터 자료구조
	vector<int> vec = { 1, 2, 3, 4 };

	/*for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}*/

	//범위 기반 for - int형 대신 auto 사용
	//참조로 순회하려면 auto&를 사용함
	for (auto& v : vec) {
		cout << v << " ";
	}

	return 0;
}
