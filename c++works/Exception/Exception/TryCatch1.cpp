#include <iostream>
using namespace std;

int main() {

	int n1, n2;
	int quotient, remainder;

	cout << "ù��° �� �Է�: ";
	cin >> n1;

	cout << "�ι�° �� �Է�: ";
	cin >> n2;

	try {
		if (n2 == 0)
			//cout << n1 << "��(��) 0���� ���� �� �����ϴ�\n";
			throw n1;  //catch()�� �Ű������� ����
		quotient = n1 / (double)n2;  //�� ���

		remainder = n1 % n2;         //������ ���

		cout << "��: " << quotient << endl;
		cout << "������: " << remainder << endl;
	}
	catch (int e_n) {
		cout << n1 << "��(��) 0���� ���� �� �����ϴ�.\n";
	}

	return 0;
}
