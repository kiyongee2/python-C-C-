//#include <iostream>
//
//using namespace std;
//
//// 디폴트 매개 변수를 가진 함수 선언 및 호출
//// 원형 선언
//void star(int a = 5);
//void msg(int id, string text = "");
//void f(char c = ' ', int line = 1);
//
//// 함수 구현
//void star(int a) {
//	for (int i = 0; i < a; i++) {
//		cout << '*';
//	}
//	cout << endl;
//}
//
//void msg(int id, string text) {
//	cout << id << ' ' << text << endl;
//}
//
//void f(char c, int line) {
//	for (int i = 0; i < line; i++) {
//		for (int j = 0; j < 10; j++) {
//			cout << c;
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	star();
//	star(10);
//
//	msg(10);
//	msg(10, "Hello");
//
//	f();
//	f('%');
//	f('@', 5);
//
//	return 0;
//}