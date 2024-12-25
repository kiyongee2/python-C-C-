#include <iostream>
#define PI 3.141592

using namespace std;

int main()
{
	int r = 3;
	float circleArea;
	// 상수
	const float PIE = 3.141592;

	//circleArea = PI * r * r;
	circleArea = PIE * r * r;

	cout << circleArea << endl;

	// 데이터 형변환
	char ch = 'B';
	cout << (int)ch << endl;
	cout << static_cast<int>(ch) << endl;

	// 배열 - 동일한 형(type)의 여러 개의 데이터를 순서대로 저장한 자료구조
	int month[12] = { 1, 2, 3 };
	cout << month[0] << " " << month[3] << endl;

	// 문자열 - 1차원 배열 형태를 가짐
	char alpha[6] = { 'a', 'p', 'p', 'l', 'e', '\0'};
	cout << alpha << endl;

	char alpha2[] = "apple";
	cout << alpha << endl;
	return 0;
}
