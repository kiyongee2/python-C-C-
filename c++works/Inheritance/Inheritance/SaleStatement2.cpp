//#include <iostream>
//#include <string>
//using namespace std;
//
//// ��� - ���� ��ǥ
//class Drink {
//protected:  //��ӹ��� Ŭ������ ���� ����
//    string name;   // ��ǰ��
//    int price;     // ����
//    int quantity;  // ����
//
//public:
//    Drink(string name, int price, int quantity)
//        : name(name), price(price), quantity(quantity) {
//    }  // �ʱ�ȭ ��� ���
//
//    int calcPrice() { return price * quantity;} //�ݾ� = ���� x ����
//    static void printTitle() { cout << "��ǰ��\t����\t����\t�ݾ�\n";} //������
//    void printData();
//};
//
//void Drink::printData() { //������ ���
//    cout << name << "\t" << price << "\t" << quantity <<
//        "\t" << calcPrice() << endl;
//}
//
//class Alcohol : public Drink { //Drink Ŭ���� ���
//private:
//    float alcper;  // ���� ����
//
//public:
//    Alcohol(float alcper, string name, int price, int quantity)
//        : Drink(name, price, quantity), alcper(alcper) {
//    }  // �ʱ�ȭ ��� ���
//
//    //�Լ� ������(�������̵� - ovrride)
//    void printTitle() {cout << "��ǰ��(����[%])\t����\t����\t�ݾ�\n";} 
//    void printData();
//};
//
//void Alcohol::printData() { //�Լ� ������
//    cout << name << "(" << alcper << ")\t" << price << "\t" <<
//        quantity << "\t" << calcPrice() << endl;
//}
//
//int main() {
//    cout << "============= ���� ��ǥ =============\n";
//    Drink coffee("Ŀ��", 2500, 4); //coffee ��ü ����
//    Drink tea("����", 3000, 3);    //tea ��ü ����
//
//    coffee.printTitle();
//    coffee.printData();
//    tea.printData();
//    cout << endl;
//
//    Alcohol soju(15.1f, "soju", 4000, 2); //soju ��ü ����
//    soju.printTitle();
//    soju.printData();
//
//    // �հ� �ݾ� ���
//    int total = coffee.calcPrice() + tea.calcPrice() + soju.calcPrice();
//    cout << endl;
//    cout << "*** �հ� �ݾ�: " << total << "�� ***\n";
//
//    return 0;
//}
