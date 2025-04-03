//#include <iostream>
//#include <string>
//using namespace std;
//
////상속 - 매출 전표
//class Drink {
//protected: 
//	string name;   //상품명
//	int price;     //가격
//	int quantity;  //수량
//
//public:
//	Drink(string name, int price, int quantity) {
//		this->name = name;
//		this->price = price;
//		this->quantity = quantity;
//	}
//
//	int calcPrice() {
//		return price * quantity;
//	};
//
//	void printTitle() {
//		cout << "상품명\t가격\t수량\t금액\n";
//	}
//
//	void printData() {
//		cout << name << "\t" << price << "\t" << quantity <<
//					"\t" << calcPrice() << endl;
//	}
//};
//
//class Alcohol : public Drink{
//private:
//	float alcper;  //알콜 도수
//
//public:
//	Alcohol(float alcper, string name, int price, int quantity) : Drink(name, price, quantity) {
//		this->alcper = alcper;
//	}
//
//	void printTitle() {
//		cout << "상품명(도수[%])\t가격\t수량\t금액\n";
//	}
//
//	void printData() {
//		cout << name << "(" << alcper << ")\t" << price << "\t" <<
//			quantity << "\t" << calcPrice() << endl;
//	}
//};
//
//
//int main()
//{
//	Drink coffee("커피", 2500, 4);
//	Drink tea("녹차", 3000, 3);
//
//	cout << "============= 매출 전표 =============\n";
//	coffee.printTitle();
//	coffee.printData();
//	tea.printData();
//	cout << endl;
//
//	Alcohol soju(15.1f, "soju", 4000, 2);
//	soju.printTitle();
//	soju.printData();
//
//	int total;
//	total = coffee.calcPrice() + tea.calcPrice() + soju.calcPrice();
//	cout << "***** 합계 금액: " << total << "원 *****\n";
//
//	return 0;
//}