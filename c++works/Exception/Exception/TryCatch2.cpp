//#include <iostream>
//#include <cstring>  //strlen() 사용
//using namespace std;
//
//int stringToInt(const char x[]) {
//	int sum = 0;
//	int len = strlen(x);
//	for (int i = 0; i < len; i++) {
//		if (x[i] >= '0' && x[i] <= '9')
//			sum = sum * 10 + x[i] - '0';
//		else
//			throw x;  //예외 catch로 반환
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
//		cout << "\"87\" 은 정수 " << n << "로 변환됨\n";
//
//		/*n = stringToInt("8a");
//		cout << "\"8a\" 은 정수 " << n << "로 변환됨\n";*/
//	}
//	catch (const char* str) { 
//		//const 참조(char* str)는 데이터는 수정할 수 없고 복사됨
//		//char x[] 배열은 포인터로 암시적으로 변환됨
//		cout << str << " 처리에서 예외 발생!" << endl;
//	}
//	
//	return 0;
//}
