#include <iostream>
#define PI 3.141592

using namespace std;

int main()
{
	int r = 3;
	float circleArea;
	// ���
	const float PIE = 3.141592;

	//circleArea = PI * r * r;
	circleArea = PIE * r * r;

	cout << circleArea << endl;

	// ������ ����ȯ
	char ch = 'B';
	cout << (int)ch << endl;
	cout << static_cast<int>(ch) << endl;

	// �迭 - ������ ��(type)�� ���� ���� �����͸� ������� ������ �ڷᱸ��
	int month[12] = { 1, 2, 3 };
	cout << month[0] << " " << month[3] << endl;

	// ���ڿ� - 1���� �迭 ���¸� ����
	char alpha[6] = { 'a', 'p', 'p', 'l', 'e', '\0'};
	cout << alpha << endl;

	char alpha2[] = "apple";
	cout << alpha << endl;
	return 0;
}
