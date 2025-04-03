#include <iostream>
#include <string>
using namespace std;

/*
	static 멤버 함수를 가진 Math 클래스
*/
class Math {
public:
	static int abs(int x) { //절대값 함수
		return (x < 0) ? -x : x;
	}

	static int max(int x, int y) { //큰 수 선택
		return (x > y) ? x : y;
	}

	static int min(int x, int y) { //작은수 선택
		return (x < y) ? x : y;
	}
};

int main()
{
	//객체(인스턴스)를 생성하지 않음
	/*Math math1;
	cout << math1.abs(-3) << endl;*/

	//클래스 이름으로 직접 접근(범위 연산자)
	cout << "-3의 절대값: " << Math::abs(-3) << endl;
	cout << "10과 20중 큰수: " << Math::max(10, 20) << endl;
	cout << "10과 20중 작은수: " << Math::min(10, 20) << endl;

	return 0;
}
