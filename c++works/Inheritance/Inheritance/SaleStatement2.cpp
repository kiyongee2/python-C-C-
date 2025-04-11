//#include <iostream>
//#include <string>
//using namespace std;
//
//// 상속 - 매출 전표
//class Drink {
//protected:  //상속받은 클래스는 접근 가능
//    string name;   // 상품명
//    int price;     // 가격
//    int quantity;  // 수량
//
//public:
//    Drink(string name, int price, int quantity)
//        : name(name), price(price), quantity(quantity) {
//    }  // 초기화 목록 사용
//
//    int calcPrice() { return price * quantity;} //금액 = 가격 x 수량
//    static void printTitle() { cout << "상품명\t가격\t수량\t금액\n";} //제목행
//    void printData();
//};
//
//void Drink::printData() { //데이터 출력
//    cout << name << "\t" << price << "\t" << quantity <<
//        "\t" << calcPrice() << endl;
//}
//
//class Alcohol : public Drink { //Drink 클래스 상속
//private:
//    float alcper;  // 알콜 도수
//
//public:
//    Alcohol(float alcper, string name, int price, int quantity)
//        : Drink(name, price, quantity), alcper(alcper) {
//    }  // 초기화 목록 사용
//
//    //함수 재정의(오버라이드 - ovrride)
//    void printTitle() {cout << "상품명(도수[%])\t가격\t수량\t금액\n";} 
//    void printData();
//};
//
//void Alcohol::printData() { //함수 재정의
//    cout << name << "(" << alcper << ")\t" << price << "\t" <<
//        quantity << "\t" << calcPrice() << endl;
//}
//
//int main() {
//    cout << "============= 매출 전표 =============\n";
//    Drink coffee("커피", 2500, 4); //coffee 객체 생성
//    Drink tea("녹차", 3000, 3);    //tea 객체 생성
//
//    coffee.printTitle();
//    coffee.printData();
//    tea.printData();
//    cout << endl;
//
//    Alcohol soju(15.1f, "soju", 4000, 2); //soju 객체 생성
//    soju.printTitle();
//    soju.printData();
//
//    // 합계 금액 계산
//    int total = coffee.calcPrice() + tea.calcPrice() + soju.calcPrice();
//    cout << endl;
//    cout << "*** 합계 금액: " << total << "원 ***\n";
//
//    return 0;
//}
