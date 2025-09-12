//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Book {
//private:
//	int number;    //å��ȣ
//	string title;  //å����
//	string author; //����
//
//public:
//    //������
//	Book(int number, string title, string author);
//
//	int getNumber();
//	string getTitle();
//	string getAuthor();
//	void showBookInfo(); //å ���� ���
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
//	cout << "å ��ȣ: " << getNumber() << endl;
//	cout << "å ����: " << getTitle() << endl;
//	cout << "����: " << getAuthor() << endl;
//}
//
//int main()
//{
//	//Book �ν��Ͻ��� ������ vector ����
//	vector<Book> books;
//
//	//���� ����
//	books.push_back(Book(100, "ä��������", "�Ѱ�"));
//	books.push_back(Book(101, "C++ ��������", "���Գ�"));
//	books.push_back(Book(102, "����� C���", "������"));
//
//	//Ư�� ��� �˻� - �ε���
//	//books[1].showBookInfo(); //1�� ��� �˻�
//	//books.at(1).showBookInfo();
//	
//	//Ư�� ��� �˻� - �ݺ��� or auto �� 1���� ����� ��
//	//vector<Book>::iterator it = books.begin(); //0�� ���
//	//it->showBookInfo();
//
//	//Ư�� ��� �˻� - auto
//	auto it = books.begin() + 1; //1�� ���
//	it->showBookInfo();
//
//	/*cout << "********** å�� ���� **********\n";
//	for (int i = 0; i < books.size(); i++) {
//		books[i].showBookInfo();
//		cout << "===============================\n";
//	}
//	cout << endl;*/
//
//	//���� ���� - 2�� ���
//	books.erase(books.begin() + 2);
//
//	cout << "***** ������ å�� ���� *****\n";
//	for (auto book : books) {
//		book.showBookInfo();
//		cout << "================================\n";
//	}
//
//	return 0;
//}