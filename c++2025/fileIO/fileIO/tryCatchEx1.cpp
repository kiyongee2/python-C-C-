//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n1, n2;
//	int quotient, remainder; //몫, 나머지
//
//	try {
//		cout << "첫번째 수 입력: ";
//		cin >> n1;
//
//		cout << "두번째 수 입력: ";
//		cin >> n2;
//
//		if (n2 == 0)
//			throw n1; //예외 발생 - catch()의 인자로 보냄
//		quotient = n1 / n2;  //몫
//		remainder = n1 % n2; //나머지
//
//		cout << "몫: " << quotient << endl;
//		cout << "나머지: " << remainder << endl;
//	}
//	catch (int e_n) {
//		cout << n1 << "은 0으로 나눌 수 없습니다.\n";
//	}
//
//	return 0;
//}