//#include <iostream>
//#include <mysqlx/xdevapi.h>
//
//using namespace std;
//using namespace mysqlx;
//
//int main() {
//    try {
//        // MySQL ���� ���� (��Ʈ �⺻��: 3306)
//        Session sess("localhost", 3306, "cplususer", "pwcplus", "cplusdb");
//
//        cout << "MySQL ������ ���������� ����Ǿ����ϴ�!" << endl;
//
//        // ������ ���� ����
//        SqlResult result = sess.sql("SHOW TABLES").execute();
//        auto tables = result.fetchAll();
//
//        cout << "\n�����ͺ��̽� ���̺� ���:" << endl;
//        for (auto row : tables) {
//            cout << row[0] << endl;
//        }
//
//        // ���̺��� ������ ��ȸ
//        result = sess.sql("SELECT * FROM users").execute();
//        auto users = result.fetchAll();
//
//        cout << "\n����� ���:" << endl;
//        for (auto user : users) {
//            cout << "ID: " << user[0]
//                << ", �̸�: " << user[1]
//                << ", �̸���: " << user[2] << endl;
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