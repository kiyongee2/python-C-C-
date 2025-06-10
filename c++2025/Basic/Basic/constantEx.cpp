//#include <iostream>
//using namespace std;
//
//#define PI 3.141592 //매크로 상수
//int main()
//{
//	//원의 넓이 계산
//	int radius = 6;
//	const double PI2 = 3.141592;  //원주율 상수
//	double circleArea1, circleArea2;
//
//	//PI = 3.14;  //상수는 수정할 수 없음
//
//	//1. 매크로 상수 활용
//	cout << fixed;  //소수 자리수 설정
//	cout.precision(6); 
//	circleArea1 = PI * radius * radius;
//	cout << "원의 넓이: " << circleArea1 << endl;
//
//	//2. const 상수 키워드 활용(권장)
//	circleArea2 = PI2 * radius * radius; //정밀 계산
//
//	cout << fixed;  //소수 자리수 설정
//	cout.precision(6);
//	cout << "원의 넓이: " << circleArea2 << endl;  
//
//	return 0;
//}
//
