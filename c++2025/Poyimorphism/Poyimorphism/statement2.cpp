//#include <iostream>
//#include <vector>
//#include "NonAlcohol.h"
//#include "Alcohol.h"
//
//int main() {
//    vector<Drink*> drinks;
//
//    // ���� ��ü ����
//    drinks.push_back(new NonAlcohol("Ŀ��", 2500, 4));
//    drinks.push_back(new Alcohol("����", 3500, 2, 14.8f));
//    drinks.push_back(new NonAlcohol("�ݶ�", 2000, 3));
//    drinks.push_back(new Alcohol("����", 4000, 1, 5.0f));
//
//    // ���
//    for (Drink* drink : drinks) {
//        drink->printTitle();
//        drink->printData();
//        cout << endl;
//    }
//
//    // �޸� ����
//    for (Drink* drink : drinks) {
//        delete drink;
//    }
//
//    drinks.clear();
//
//    return 0;
//}
