//#include <iostream>
//#include <string>
//using namespace std;
//
////Book 클래스 정의 - 정보 은닉
//class Book {
//private:
//	int number;    //책 번호
//	string title;  //책 제목
//	string author; //저자
//
//public:
//	//Book();   //기본 생성자(생략)
//	
//	//get(), set() 함수로 private 멤버에 접근
//	void setNumber(int n);
//	int getNumber();
//	void setTitle(string t);
//	string getTitle();
//	void setAuthor(string a);
//	string getAuthor();
//};
//
//void Book::setNumber(int n){
//	number = n;
//}
//
//int Book::getNumber(){
//	return number;
//}
//
//void Book::setTitle(string t) {
//	title = t;
//}
//
//string Book::getTitle() {
//	return title;
//}
//
//void Book::setAuthor(string a) {
//	author = a;
//}
//
//string Book::getAuthor() {
//	return author;
//}
//
//int main()
//{
//	Book book1;
//
//	book1.setNumber(100);
//	book1.setTitle("채식주의자");
//	book1.setAuthor("한강");
//
//	cout << "********** 책의 정보 **********" << endl;
//	cout << "책 번호 : " << book1.getNumber() << endl;
//	cout << "책 제목 : " << book1.getTitle() << endl;
//	cout << "책 저자 : " << book1.getAuthor() << endl;
//
//	return 0;
//}
