#include <iostream>
using namespace std;

class MyMath {
public:
	//���밪 ���
	static int abs(int x) {
		return (x < 0) ? -x : x;
	}

	//�ִ밪 ���
	static int max(int x, int y) {
		return (x > y) ? x : y;
	}

	//�ּҰ� ���
	static int min(int x, int y) {
		return (x < y) ? x : y;
	}
};

int main()
{
	//�ν��Ͻ��� �������� ����
	/*MyMath math;
	cout << "-3�� ���밪: " << math.abs(-3) << endl;*/

	//Ŭ���� �̸����� ���� ����
	cout << "-3�� ���밪: " << MyMath::abs(-3) << endl;
	cout << "10�� 20�� ū��: " << MyMath::max(10, 20) << endl;
	cout << "10�� 20�� ������: " << MyMath::min(10, 20) << endl;
}
