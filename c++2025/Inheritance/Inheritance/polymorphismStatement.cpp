//#include <iostream>
//#include <vector>
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
//        cout << "��ǰ��\t����\t����\t�ݾ�\n";
//    }
//
//    virtual void printData() = 0;  // ���� ���� �Լ�
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
//        cout << "��ǰ��(����[%])\t����\t����\t�ݾ�\n";
//    }
//
//    void printData() override {
//        cout << name << "(" << alcper << ")\t" << price << "\t"
//            << quantity << "\t" << calcPrice() << endl;
//    }
//};
//
//int main() {
//    NonAlcohol coffee("Ŀ��", 2500, 4);
//    NonAlcohol tea("����", 3000, 3);
//    Alcohol soju("����", 4000, 2, 15.1f);
//
//    vector<Drink*> drinks = { &coffee, &tea, &soju };
//
//    cout << "========== ���� ��ǥ ==========\n";
//    Drink::printTitle();
//    for (auto d : drinks) {
//        d->printData();
//    }
//
//    int total = 0;
//    for (auto d : drinks) {
//        total += d->calcPrice();
//    }
//    cout << "******* �հ� �ݾ�: " << total << "�� *******\n";
//
//    return 0;
//}