#include <iostream>
using namespace std;

int main()
{
	/*
		2���� �迭�� �����ϰ� 1 ~ 6���� �����ϱ�
	*/

	int a[2][3];
	int i, j, k = 0;
	
	//����
	for (i = 0; i < 2; i++) 
	{
		for (j = 0; j < 3; j++)
		{
			a[i][j] = k + 1;
			k++;
		}
	}

	//���
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << a[i][j] << " ";
		}
	}

	return 0;
}

