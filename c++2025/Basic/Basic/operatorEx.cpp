//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//사칙 연산
//	int n1 = 4, n2 = 5;
//	int add, sub, mul;
//	float div;
//
//	add = n1 + n2;
//	sub = n1 - n2;
//	mul = n1 * n2;
//	div = (float)n1 / n2;  //강제 형변환: 정수 -> 실수
//
//	cout << add << endl;  //9
//	cout << sub << endl;  //-1
//	cout << mul << endl;  //20
//	cout << div << endl;  //0.8
//
//	//몫과 나머지
//	int bread = 20, people = 3;
//	int share, remainder;
//
//	share = bread / people;
//	remainder = bread % people;
//
//	cout << "몫: " << share << endl;
//	cout << "나머지: " << remainder << endl;
//
//	//논리 연산자
//	int a = 3, b = 4, c = 5;
//	int res1, res2, res3;
//
//	res1 = (a < b) && (b == c); // 1 && 0 = 0
//	res2 = (a < b) || (b == c); // 1 || 0 = 1
//	res3 = !(b > c); // !0 = 1
//
//	cout << res1 << endl;
//	cout << res2 << endl;
//	cout << res3 << endl;
//
//	return 0;
//}