//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Book {
//private:
//	int number;    //책번호
//	string title;  //책제목
//	string author; //저자
//
//public:
//    //생성자
//	Book(int number, string title, string author);
//
//	int getNumber();
//	string getTitle();
//	string getAuthor();
//	void showBookInfo(); //책 정보 출력
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
//void Book::showBookInfo() {
//	cout << "책 번호: " << getNumber() << endl;
//	cout << "책 제목: " << getTitle() << endl;
//	cout << "저자: " << getAuthor() << endl;
//}
//
//int main()
//{
//	//Book 인스턴스를 저장할 vector 생성
//	vector<Book> books;
//
//	//도서 생성
//	books.push_back(Book(100, "채식주의자", "한강"));
//	books.push_back(Book(101, "C++ 완전정복", "조규남"));
//	books.push_back(Book(102, "모두의 C언어", "이형우"));
//
//	//특정 요소 검색 - 인덱싱
//	//books[1].showBookInfo(); //1번 요소 검색
//	//books.at(1).showBookInfo();
//	
//	//특정 요소 검색 - 반복자 or auto 중 1개만 사용할 것
//	//vector<Book>::iterator it = books.begin(); //0번 요소
//	//it->showBookInfo();
//
//	//특정 요소 검색 - auto
//	auto it = books.begin() + 1; //1번 요소
//	it->showBookInfo();
//
//	/*cout << "********** 책의 정보 **********\n";
//	for (int i = 0; i < books.size(); i++) {
//		books[i].showBookInfo();
//		cout << "===============================\n";
//	}
//	cout << endl;*/
//
//	//도서 삭제 - 2번 요소
//	books.erase(books.begin() + 2);
//
//	cout << "***** 삭제후 책의 정보 *****\n";
//	for (auto book : books) {
//		book.showBookInfo();
//		cout << "================================\n";
//	}
//
//	return 0;
//}