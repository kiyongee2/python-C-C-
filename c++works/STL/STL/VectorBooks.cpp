//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
////Book Ŭ���� ����
//class Book {
//private:
//	int number;    //å ��ȣ
//	string title;  //å ����
//	string author; //����
//public:
//	//������
//	Book(int number, string title, string author); 
//
//	//��� �Լ�
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
//	cout << "å ��ȣ : " << getNumber() << endl;
//	cout << "å ���� : " << getTitle() << endl;
//	cout << "å ���� : " << getAuthor() << endl;
//}
//
//int main()
//{
//	//��ü �迭 
//	/*Book book[3] = {
//		Book(100, "ä��������", "�Ѱ�"),
//		Book(101, "C++ ��������", "���Գ�"),
//		Book(102, "����� C���", "������"),
//	};*/
//
//	//vector �ڷᱸ���� ��ü ����
//	vector<Book> books;
//
//	books.push_back(Book(100, "ä��������", "�Ѱ�"));
//	books.push_back(Book(101, "C++ ��������", "���Գ�"));
//	books.push_back(Book(102, "����� C���", "������"));
//
//	cout << "********** å�� ���� **********" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		books[i].bookInfo();
//		cout << "==============================\n";
//	}
//
//	return 0;
//}