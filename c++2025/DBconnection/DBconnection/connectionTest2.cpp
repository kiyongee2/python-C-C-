//#include <iostream>
////#include <mysqlx/xdevapi.h> // ���� ���������� ���ԵǾ�� ��
//#include "C:/Program Files/MySQL/MySQL Connector C++ 8.0/include/mysqlx/xdevapi.h"
//
//using namespace std;
//using namespace mysqlx;
//
//int main() {
//    try {
//        // ���� ���ڿ� ����: mysqlx://[user[:password]]@host[:port][/schema]
//        Session sess("mysqlx://cplususer:pwcplus@localhost:33060/cplusdb?ssl-mode=disabled");
//
//        cout << "MySQL ������ ���������� ����Ǿ����ϴ�!" << endl;
//
//        // ���� ��Ű�� �������� (������ ���� �߻�)
//        Schema db = sess.getSchema("test_db");
//
//        // �÷��� ���� (�̹� �����ϸ� ���� �÷��� ��ȯ)
//        Collection users = db.createCollection("users", true);
//
//        // JSON ���� �߰�
//        users.add(R"({
//            "name": "ȫ�浿",
//            "email": "hong@example.com",
//            "age": 30,
//            "address": {
//                "city": "����",
//                "zipcode": "12345"
//            }
//        })").execute();
//
//        // ���� ��ȸ (����: age > 20)
//        DocResult docs = users.find("age > 20").execute();
//
//        cout << "\n�˻� ���:" << endl;
//        for (auto doc : docs) {
//            cout << "����: " << doc << endl;
//
//            // Ư�� �ʵ� ����
//            cout << "�̸�: " << doc["name"] << endl;
//            cout << "����: " << doc["address"]["city"] << endl;
//        }
//
//    }
//    catch (const mysqlx::Error& err) {
//        cerr << "MySQL ����: " << err.what() << endl;
//        return 1;
//    }
//    catch (const exception& ex) {
//        cerr << "�Ϲ� ����: " << ex.what() << endl;
//        return 1;
//    }
//
//    return 0;
//}