//#include <iostream>
//using namespace std;
//
//int getExp(int base, int exp) {
//	if (base <= 0 || exp < 0) {
//		throw "���� ��� �Ұ�"; //catch()�� ����
//	}
//	int value = 1;
//	for (int n = 0; n < exp; n++)
//		value = value * base;
//	return value;
//	/*
//	  base=2, exp=3
//	  n=0, 2 = 1 * 2
//	  n=1, 4 = 2 * 2 
//	  n=2, 8 = 4 * 2
//	 */
//}
//
//int main()
//{
//	int val = 0;
//	try {
//		val = getExp(2, 0); //������ �Է��ϸ� ���� �߻�
//		cout << "2�� 0���� " << val << "�Դϴ�." << endl;
//	}
//	catch(const char *s){
//		cout << "���� �߻�!! " << s << endl;
//	}
//
//	return 0;
//}