//#include <iostream>
//using namespace std;
//
//int main()
//{
//	/*int* p;
//
//	p = new int;  // 1���� ���� ���� �Ҵ�
//	if (!p) {
//		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
//		return 0;
//	}
//
//	*p = 5; //�Ҵ� ���� ���� ������ 5 ���
//	int n = *p;
//	cout << "*p = " << *p << endl;
//	cout << "n = " << n << endl;
//
//	delete p;  //�Ҵ� ���� �޸� ��ȯ*/
//
//	cout << "�Է��� ������ ������? ";
//	int n;
//
//	cin >> n;
//	if (n <= 0) return 0;
//	int* p = new int[n];  //n���� ���� �迭 ���� �Ҵ�
//	if (!p) {
//		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
//		return 0;
//	}
//
//	for (int i = 0; i < n; i++) {
//		cout << i + 1 << "��° ����: ";
//		cin >> p[i];
//	}
//
//	int sum = 0;
//	for (int i = 0; i < n; i++) {
//		sum += p[i];
//	}
//	cout << "��� : " << sum / n << endl;
//
//	delete[] p;
//
//	return 0;
//}