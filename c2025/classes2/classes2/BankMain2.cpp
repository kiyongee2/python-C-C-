//#include <iostream>
//#include "BankAccount.h"
//using namespace std;
//
//int main() {
//
//    const int SIZE = 3;
//    
//    BankAccount* accounts = new BankAccount[SIZE]{
//        BankAccount(1001, "�̿���"),
//        BankAccount(1002, "������"),
//        BankAccount(1003, "�Ѱ�", 100000)
//    };
//
//    // �Ա�
//    accounts[0].deposit(10000);
//    accounts[1].deposit(30000);
//
//    // ���
//    accounts[1].withdraw(20000);
//    accounts[1].withdraw(50000); // �ܾ� ����
//
//    // ���� ���� �� �ŷ� ���� ���
//    for (int i = 0; i < SIZE; i++) {
//        accounts[i].displayInfo();
//        accounts[i].getTransactionHistory();
//    }
//
//    delete[] accounts;
//
//    return 0;
//}