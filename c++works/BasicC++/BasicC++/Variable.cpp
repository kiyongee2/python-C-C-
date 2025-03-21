//#include <iostream>
//
//using namespace std;  //이름 공간 설정
//
//int main()
//{
//	//정수형 변수 n1, n2 선언 및 초기화
//	int n1 = 4;  
//	int n2 = 5;
//
//	//출력
//	cout << "두 수의 합: " << n1 + n2 << endl;
//	cout << "두 수의 차: " << n1 - n2 << endl;
//	cout << "두 수의 곱: " << n1 * n2 << endl;
//	cout << "두 수의 나누기: " << (double)n1 / n2 << endl; //명시적 형변환
//	cout << "자료형의 크기: " << sizeof(n1) << "bytes" << endl;
//
//	cout << "============================" << endl;
//
//	double n3 = 1.1;
//	double n4 = 2.1;
//
//	cout << "두 수의 곱: " << n3 * n4 << endl;
//
//	cout.precision(3); //소수 자리수 설정
//	cout << "두 수의 나누기: " << n3 / n4 << endl;
//	cout << "자료형의 크기: " << sizeof(n3) << "bytes" << endl;
//	cout << "============================" << endl;
//
//	//문자형 변수 ch 선언 및 초기화
//	char ch1 = 'A';
//	char ch2 = 65;      //아스키 코드값
//	char ch3 = '\n';
//	char ch4[] = "나";  //배열 - 문자열 끝에 '\0' 포함
//
//	cout << ch1 << endl;
//	cout << ch2 << endl;
//	cout << ch3 << endl;
//	cout << ch4 << endl;
//
//	cout << "자료형의 크기: " << sizeof(ch1) << "bytes" << endl;
//	cout << "자료형의 크기: " << sizeof(ch4) << "bytes" << endl;
//	cout << "============================" << endl;
//
//	//문자열(c++ 에서 추가된 자료형-string)
//	string s1 = "banana";
//	string s2 = "안녕하세요";
//
//	cout << s1 << endl;
//	cout << s2 << endl;
//	//string은 동적 메모리이므로 컴파일러에 따라 크기가 다르다.
//	cout << "자료형의 크기: " << sizeof(s1) << "bytes" << endl;
//	cout << "자료형의 크기: " << sizeof(s2) << "bytes" << endl;
//	cout << "문자열의 길이: " << size(s1) << "bytes" << endl;
//	cout << "문자열의 길이: " << size(s2) << "bytes" << endl;
//
//	return 0;
//}
