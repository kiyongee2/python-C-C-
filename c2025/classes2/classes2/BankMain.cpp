//#include <iostream>
//#include <vector>
//#include "BankAccount.h"
//using namespace std;
//
//int main() {
//    //���� �ڷᱸ�� �ν��Ͻ� ����
//    vector<BankAccount> accounts;
//
//    //���� ���� �ν��Ͻ� ���� �� ����
//    accounts.push_back(BankAccount(1001, "�̿���"));
//    accounts.push_back(BankAccount(1002, "������"));
//    accounts.push_back(BankAccount(1003, "�Ѱ�", 100000));
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
//    for (BankAccount& account : accounts) {
//        account.displayInfo();
//        account.getTransactionHistory();
//    }
//
//    return 0;
//}
