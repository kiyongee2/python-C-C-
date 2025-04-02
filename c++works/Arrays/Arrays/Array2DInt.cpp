#include <iostream>
using namespace std;

int main()
{
	/*
		2차원 배열을 생성하고 1 ~ 6까지 저장하기
	*/

	int a[2][3];
	int i, j, k = 0;
	
	//저장
	for (i = 0; i < 2; i++) 
	{
		for (j = 0; j < 3; j++)
		{
			a[i][j] = k + 1;
			k++;
		}
	}

	//출력
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << a[i][j] << " ";
		}
	}

	return 0;
}

