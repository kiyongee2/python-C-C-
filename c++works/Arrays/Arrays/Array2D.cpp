#include <iostream>
using namespace std;

int main()
{
	// ������ 2���� �迭 ���� �� �ʱ�ȭ
	int a[3][2] = {
		{75, 80},
		{85, 95},
		{90, 100}
	};

	//Ư�� ��� ��ȸ
	cout << "a[0][0]=" << a[0][0] << endl;
	cout << "a[1][1]=" << a[1][0] << endl;

	//��ü ��ȸ
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 2; y++)
		{
			cout << "a[" << x << "][" << y << "]=" << a[x][y] << ' ';
		}
		cout << '\n';
	}

	//����� �� �� �հ�
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
	cout << "�迭�� ��� ��: " << count << endl;
	cout << "�迭�� ����� ����: " << total << endl;

	return 0;
}