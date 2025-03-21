#include <iostream>
using namespace std;

int main()
{
	// 정수형 2차원 배열 선언 및 초기화
	int a[3][2] = {
		{75, 80},
		{85, 95},
		{90, 100}
	};

	//특정 요소 조회
	cout << "a[0][0]=" << a[0][0] << endl;
	cout << "a[1][1]=" << a[1][0] << endl;

	//전체 조회
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 2; y++)
		{
			cout << "a[" << x << "][" << y << "]=" << a[x][y] << ' ';
		}
		cout << '\n';
	}

	//요소의 수 및 합계
	int count = 0;
	int total = 0;
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 2; y++)
		{
			count++;
			total += a[x][y];
		}
		
	}
	cout << "배열의 요소 수: " << count << endl;
	cout << "배열의 요소의 총합: " << total << endl;

	return 0;
}