#include <iostream>
#include <string>
using namespace std;

/*
	static ��� �Լ��� ���� Math Ŭ����
*/
class Math {
public:
	static int abs(int x) { //���밪 �Լ�
		return (x < 0) ? -x : x;
	}

	static int max(int x, int y) { //ū �� ����
		return (x > y) ? x : y;
	}

	static int min(int x, int y) { //������ ����
		return (x < y) ? x : y;
	}
};

int main()
{
	//��ü(�ν��Ͻ�)�� �������� ����
	/*Math math1;
	cout << math1.abs(-3) << endl;*/

	//Ŭ���� �̸����� ���� ����(���� ������)
	cout << "-3�� ���밪: " << Math::abs(-3) << endl;
	cout << "10�� 20�� ū��: " << Math::max(10, 20) << endl;
	cout << "10�� 20�� ������: " << Math::min(10, 20) << endl;

	return 0;
}
