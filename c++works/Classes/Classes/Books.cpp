//#include <iostream>
//#include <string>
//using namespace std;
//
////Book 클래스 정의 - 객체 배열
//class Book {
//private:
//	int number;    //책 번호
//	string title;  //책 제목
//	string author; //저자
//public:
//	Book(int n, string t, string a);
//
//	//get() 함수만 사용
//	int getNumber();
//	string getTitle();
//	string getAuthor();
//};
//
//// 생성자 초기화
//Book::Book(int n, string t, string a) {
//	number = n;
//	title = t;
//	author = a;
//}
//
//int Book::getNumber() {
//	return number;
//}
//
//string Book::getTitle() {
//	return title;
//}
//
//string Book::getAuthor() {
//	return author;
//}
//
//int main()
//{
//	//객체 배열 
//	Book book[3] = {
//		Book(100, "채식주의자", "한강"),
//		Book(101, "C++ 완전정복", "조규남"),
//		Book(102, "모두의 C언어", "이형우"),
//	};
//
//	cout << "********** 책의 정보 **********" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "책 번호 : " << book[i].getNumber() << endl;
//		cout << "책 제목 : " << book[i].getTitle() << endl;
//		cout << "책 저자 : " << book[i].getAuthor() << endl;
//	}
//
//	return 0;
//}
