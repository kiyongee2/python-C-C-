//#include <iostream>
//using namespace std;
//
//class Drink {
//protected:
//    string name;
//    int price;
//    int quantity;
//
//public:
//    Drink(string name, int price, int quantity) :
//        name(name), price(price), quantity(quantity) {
//    }
//
//    int calcPrice() { return price * quantity; }
//
//    static void printTitle() {
//        cout << "상품명\t가격\t수량\t금액\n";
//    }
//
//    virtual void printData() = 0;  // 순수 가상 함수
//};
//
//class NonAlcohol : public Drink {
//public:
//    NonAlcohol(string name, int price, int quantity) :
//        Drink(name, price, quantity) {
//    }
//
//    void printData() override {
//        cout << name << "\t" << price << "\t"
//            << quantity << "\t" << calcPrice() << endl;
//    }
//};
//
//class Alcohol : public Drink {
//    float alcper;
//
//public:
//    Alcohol(string name, int price, int quantity, float alcper) :
//        Drink(name, price, quantity), alcper(alcper) {
//    }
//
//    static void printTitle() {
//        cout << "상품명(도수[%])\t가격\t수량\t금액\n";
//    }
//
//    void printData() override {
//        cout << name << "(" << alcper << ") " << price << "\t"
//            << quantity << "\t" << calcPrice() << endl;
//    }
//};
//
//int main() {
//    //다형성을 이용한 인스턴스 생성
//    Drink* coffee = new NonAlcohol("커피", 2500, 4);
//    Drink* tea = new NonAlcohol("녹차", 3000, 3);
//    Drink* soju = new Alcohol("소주", 4000, 2, 15.1f);
//
//    Drink* drinks[3] = { coffee, tea, soju };
//
//    cout << "========== 매출 전표 ==========\n";
//    Drink::printTitle();
//    for (auto drink : drinks)
//        drink->printData();
//
//    int total = 0;
//    for (auto d : drinks) {
//        total += d->calcPrice();
//    }
//    cout << "******* 합계 금액: " << total << "원 *******\n";
//
//    delete coffee;
//    delete tea;
//    delete soju;
//
//    return 0;
//}