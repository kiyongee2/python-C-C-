//#include <iostream>
//using namespace std;
//
////���ڿ��� ������ ��ȯ�ϴ� �Լ�
//int stringToInt(const char x[]) {
//	int sum = 0;
//	int len = strlen(x);
//
//	for (int i = 0; i < len; i++) {
//		if (x[i] > '0' && x[i] <= '9')
//			sum = sum * 10 + (x[i] - '0');
//		else
//			throw x; //���� �߻�(������ ����)
//	}
//	return sum;
//}
//
//int main()
//{
//	int n;
//
//	try {
//		//n = stringToInt("12");
//		n = stringToInt("12a");
//
//		cout << "\"12\"�� ���� " << n << "���� ��ȯ��\n";
//
//	}
//	catch (const char* str) {
//		cout << str << " ó������ ���� �߻�!" << endl;
//	}
//
//	char s[] = "apple";
//	cout << strlen(s) << endl;
//
//	int x = '0';
//	int y = '1';
//
//	cout << x << ", " << y << endl; //48, 49
//	cout << y - x << endl;  //1
//	
//	return 0;
//}