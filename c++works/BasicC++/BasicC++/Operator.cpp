//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	//���� ������
//	int a = 99;
//	int b = 9;
//
//	cout << a++ << endl;  //99, ��ġ ������
//	cout << a << endl;    //100
//
//	cout << ++a<< endl;   //101, ��ġ ������ 
//	cout << a << endl;    //101
//
//	cout << a-- << endl;  //101
//	cout << a << endl;    //100
//
//	cout << --a << endl;  //99
//	cout << a << endl;    //99
//
//	//��� ������
//	int share, remainder;
//
//	share = a / b;
//	remainder = a % b;
//
//	cout << "��: " << share << endl;   //11
//	cout << "������: " << remainder << endl;  //0
//
//	//�� ������
//	cout << "a == b : " << (a == b) << endl;
//	cout << "a != b : " << (a != b) << endl;
//	cout << "a >= b : " << (a >= b) << endl;
//	cout << "a <= b : " << (a <= b) << endl;
//
//	//�� ������
//	cout << "(a == b) && (a > b) : " << ((a == b) && (a > b)) << endl;
//	cout << "(a == b) || (a > b) : " << ((a == b) || (a > b)) << endl;
//	cout << "!(a == b) : " << (!(a == b)) << endl;
//
//	//���� ������
//	cout << "((a > b) ? 'T' : 'F'): " << ((a > b) ? 'T' : 'F') << endl;
//
//	//���� ���� ������
//	int c = 10;
//
//	c += 1;  //c = c + 1
//	cout << "c = " << c << endl;
//
//	c -= 1;  //c = c - 1
//	cout << "c = " << c << endl;
//
//	c *= 2; //c = c * 1
//	cout << "c = " << c << endl;
//
//	c /= 2; //c = b / 2
//	cout << "c = " << c << endl;
//
//	//��Ʈ �� ������
//	int num1 = 5;   //00000101
//	int num2 = 10;  //00001010
//	int result1, result2;
//
//	result1 = num1 & num2;  //00000000
//	result2 = num1 | num2;  //00001111
//
//	cout << "result1 = " << result1 << endl;
//	cout << "result2 = " << result2 << endl;
//
//	//��Ʈ �̵� ������
//	int num3 = 4;  //00000100
//
//	cout << "(num3 << 1) = " << (num3 << 1) << endl;  //00001000
//	cout << "(num3 >> 1) = " << (num3 >> 1) << endl;  //00000010
//
//	return 0;
//}