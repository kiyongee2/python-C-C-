//#include <iostream>
//#include <cstring>  //strlen() 사용
//using namespace std;
//
///*
//   문자열을 정수로 변환하는 프로그램
//*/
//int stringToInt(const char x[]) {
//	int sum = 0; 
//	int len = strlen(x); 
//	for (int i = 0; i < len; i++) {
//		if (x[i] > '0' && x[i] < '9')
//			sum = sum * 10 + x[i] - '0';
//		else
//			throw x;  //예외를 catch의 인자로 보냄
//	}
//	return sum;
//}
//
//int main()
//{
//	int n;
//	//예외 처리 : try ~ catch 구문
//	try {
//		/*n = stringToInt("12");
//		cout << "\"12\" 는 정수 " << n << "으로 변환됨\n";*/
//
//		n = stringToInt("12a");
//		cout << "\"12a\" 는 정수 " << n << "으로 변환됨\n";
//	}
//	catch (const char* str) {
//		cout << str << " 처리에서 예외 발생!" << endl;
//	}
//	
//	return 0;
//}

/*char s[] = "apple";
	cout << strlen(s) << endl;*/

	/*int x = '0';
	int y = '1';
	cout << x << endl;  //아스키 코드값 48
	cout << y << endl;  //아스키 코드값 49
	cout << 1 - 0 << endl;
	cout << '1' - '0' << endl;
*/
