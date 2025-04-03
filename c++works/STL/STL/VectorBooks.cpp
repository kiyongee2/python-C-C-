//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
////Book 클래스 정의
//class Book {
//private:
//	int number;    //책 번호
//	string title;  //책 제목
//	string author; //저자
//public:
//	//생성자
//	Book(int number, string title, string author); 
//
//	//멤버 함수
//	int getNumber();
//	string getTitle();
//	string getAuthor();
//	void bookInfo();
//};
//
//Book::Book(int number, string title, string author) {
//	this->number = number;
//	this->title = title;
//	this->author = author;
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
//void Book::bookInfo() {
//	cout << "책 번호 : " << getNumber() << endl;
//	cout << "책 제목 : " << getTitle() << endl;
//	cout << "책 저자 : " << getAuthor() << endl;
//}
//
//int main()
//{
//	//객체 배열 
//	/*Book book[3] = {
//		Book(100, "채식주의자", "한강"),
//		Book(101, "C++ 완전정복", "조규남"),
//		Book(102, "모두의 C언어", "이형우"),
//	};*/
//
//	//vector 자료구조로 객체 생성
//	vector<Book> books;
//
//	books.push_back(Book(100, "채식주의자", "한강"));
//	books.push_back(Book(101, "C++ 완전정복", "조규남"));
//	books.push_back(Book(102, "모두의 C언어", "이형우"));
//
//	cout << "********** 책의 정보 **********" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		books[i].bookInfo();
//		cout << "==============================\n";
//	}
//
//	return 0;
//}