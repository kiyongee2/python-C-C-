//#include <iostream>
//using namespace std;
//
//class Drink {
//protected:
//	string name;    //상품명
//	int price;      //가격
//	int quantity;   //수량
//
//public:
//	Drink(string name, int price, int quantity) :
//		name(name), price(price), quantity(quantity){ }
//
//	int calcPrice() { return price * quantity; }
//	static void printTitle() {
//		cout << "상품명\t가격\t수량\t금액\n";
//	}
//	void printData() {
//		cout << name << "\t" << price << "\t" <<
//				quantity << "\t" << calcPrice() << endl;
//	}
//};
//
////함수 재정의(override) - 상속받는 클래스에서 함수의 내용을 변경함
//class Alcohol : public Drink {
//private:
//	float alcper; //알콜 도수
//
//public:
//	Alcohol(string name, int price, int quantity, float alcper) :
//		Drink(name, price, quantity), alcper(alcper){ }
//
//	static void printTitle() {
//		cout << "상품명(도수[%])\t가격\t수량\t금액\n";
//	}
//	void printData() {
//		cout << name << "(" << alcper << ")\t" << price << "\t" <<
//			quantity << "\t" << calcPrice() << endl;
//	}
//};
//
//int main()
//{
//	//Drink 인스턴스 생성
//	Drink coffee("커피", 2500, 4);
//	Drink tea("녹차", 3000, 3);
//	
//	/*cout << "========== 매출 전표 ==========\n";
//	Drink::printTitle();
//	coffee.printData();
//	tea.printData();
//	cout << endl;*/
//
//	Drink drinks[2] = {coffee, tea};
//	int total_drink = 0;
//
//	cout << "========== 매출 전표 ==========\n";
//	Drink::printTitle();
//	for (Drink drink : drinks) {
//		drink.printData();
//		total_drink += drink.calcPrice();
//	}
//	cout << "** 음료 합계 금액: " << total_drink << "원 **\n\n";
//		
//	//Alcohol 인스턴스 생성
//	Alcohol soju("소주", 4000, 2, 15.1f);
//	Alcohol beer("맥주", 2500, 3, 5.4f);
//
//	Alcohol alcohols[2] = { soju, beer };
//	int total_alcohol = 0;
//
//	Alcohol::printTitle();
//	for (Alcohol alcohol : alcohols) {
//		alcohol.printData();
//		total_alcohol += alcohol.calcPrice();
//	}
//	cout << "** 알콜 합계 금액: " << total_alcohol << "원 **\n";
//		
//	/*int total;
//	total = coffee.calcPrice() + tea.calcPrice() + soju.calcPrice() + beer.calcPrice();*/
//
//	int total_sum = total_drink + total_alcohol;
//
//	cout << "******* 전체 합계 금액: " << total_sum << "원 *******\n";
//	
//	return 0;
//}

