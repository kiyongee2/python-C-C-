#include <iostream>
using namespace std;

class MyMath {
public:
	//절대값 계산
	static int abs(int x) {
		return (x < 0) ? -x : x;
	}

	//최대값 계산
	static int max(int x, int y) {
		return (x > y) ? x : y;
	}

	//최소값 계산
	static int min(int x, int y) {
		return (x < y) ? x : y;
	}
};

int main()
{
	//인스턴스를 생성하지 않음
	/*MyMath math;
	cout << "-3의 절대값: " << math.abs(-3) << endl;*/

	//클래스 이름으로 직접 접근
	cout << "-3의 절대값: " << MyMath::abs(-3) << endl;
	cout << "10과 20중 큰수: " << MyMath::max(10, 20) << endl;
	cout << "10과 20중 작은수: " << MyMath::min(10, 20) << endl;
}
