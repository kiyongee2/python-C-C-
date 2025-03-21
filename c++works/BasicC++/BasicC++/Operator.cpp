//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	//증감 연산자
//	int a = 99;
//	int b = 9;
//
//	cout << a++ << endl;  //99, 후치 연산자
//	cout << a << endl;    //100
//
//	cout << ++a<< endl;   //101, 전치 연산자 
//	cout << a << endl;    //101
//
//	cout << a-- << endl;  //101
//	cout << a << endl;    //100
//
//	cout << --a << endl;  //99
//	cout << a << endl;    //99
//
//	//몫과 나머지
//	int share, remainder;
//
//	share = a / b;
//	remainder = a % b;
//
//	cout << "몫: " << share << endl;   //11
//	cout << "나머지: " << remainder << endl;  //0
//
//	//비교 연산자
//	cout << "a == b : " << (a == b) << endl;
//	cout << "a != b : " << (a != b) << endl;
//	cout << "a >= b : " << (a >= b) << endl;
//	cout << "a <= b : " << (a <= b) << endl;
//
//	//논리 연산자
//	cout << "(a == b) && (a > b) : " << ((a == b) && (a > b)) << endl;
//	cout << "(a == b) || (a > b) : " << ((a == b) || (a > b)) << endl;
//	cout << "!(a == b) : " << (!(a == b)) << endl;
//
//	//조건 연산자
//	cout << "((a > b) ? 'T' : 'F'): " << ((a > b) ? 'T' : 'F') << endl;
//
//	//복합 대입 연산자
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
//	//비트 논리 연산자
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
//	//비트 이동 연산자
//	int num3 = 4;  //00000100
//
//	cout << "(num3 << 1) = " << (num3 << 1) << endl;  //00001000
//	cout << "(num3 >> 1) = " << (num3 >> 1) << endl;  //00000010
//
//	return 0;
//}