//#include <iostream>
//// 절대 경로로 직접 포함 (테스트용)
//#include "C:\Program Files\MySQL\MySQL Connector C++ 8.0\include\mysqlx\xdevapi.h";
//
//using namespace std;
//using namespace mysqlx;
//
//int main() {
//    try {
//        cout << "MySQL X DevAPI 헤더 포함 성공!" << endl;
//        Session sess("mysqlx://cplususer:pwcplus@localhost:33060");
//        cout << "연결 성공!" << endl;
//    }
//    catch (const exception& e) {
//        cerr << "오류: " << e.what() << endl;
//    }
//    return 0;
//}