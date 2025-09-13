//#include <iostream>
//using namespace std;
//
////문자열을 정수로 변환하는 함수
//int stringToInt(const char x[]) {
//	int sum = 0;
//	int len = strlen(x);
//
//	for (int i = 0; i < len; i++) {
//		if (x[i] > '0' && x[i] <= '9')
//			sum = sum * 10 + (x[i] - '0');
//		else
//			throw x; //예외 발생(비정상 문자)
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
//		cout << "\"12\"는 정수 " << n << "으로 변환됨\n";
//
//	}
//	catch (const char* str) {
//		cout << str << " 처리에서 예외 발생!" << endl;
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