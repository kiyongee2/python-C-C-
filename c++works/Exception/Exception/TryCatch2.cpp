//#include <iostream>
//#include <cstring>  //strlen() ���
//using namespace std;
//
//int stringToInt(const char x[]) {
//	int sum = 0;
//	int len = strlen(x);
//	for (int i = 0; i < len; i++) {
//		if (x[i] >= '0' && x[i] <= '9')
//			sum = sum * 10 + x[i] - '0';
//		else
//			throw x;  //���� catch�� ��ȯ
//	}
//	return sum;
//}
//
//int main() {
//	int n;
//	/*char s[] = "apple";
//	cout << strlen(s) << endl;*/
//	//cout << '8' - '0' << endl;
//	
//	try {
//		n = stringToInt("87");
//		cout << "\"87\" �� ���� " << n << "�� ��ȯ��\n";
//
//		/*n = stringToInt("8a");
//		cout << "\"8a\" �� ���� " << n << "�� ��ȯ��\n";*/
//	}
//	catch (const char* str) { 
//		//const ����(char* str)�� �����ʹ� ������ �� ���� �����
//		//char x[] �迭�� �����ͷ� �Ͻ������� ��ȯ��
//		cout << str << " ó������ ���� �߻�!" << endl;
//	}
//	
//	return 0;
//}
