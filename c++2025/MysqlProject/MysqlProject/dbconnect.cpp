//#include <iostream>
//#include <mysqlx/xdevapi.h>
//
//using namespace std;
//using namespace mysqlx;
//
//int main() {
//    try {
//        // MySQL 세션 생성 (포트 기본값: 3306)
//        Session sess("localhost", 3306, "cplususer", "pwcplus", "cplusdb");
//
//        cout << "MySQL 서버에 성공적으로 연결되었습니다!" << endl;
//
//        // 간단한 쿼리 실행
//        SqlResult result = sess.sql("SHOW TABLES").execute();
//        auto tables = result.fetchAll();
//
//        cout << "\n데이터베이스 테이블 목록:" << endl;
//        for (auto row : tables) {
//            cout << row[0] << endl;
//        }
//
//        // 테이블에서 데이터 조회
//        result = sess.sql("SELECT * FROM users").execute();
//        auto users = result.fetchAll();
//
//        cout << "\n사용자 목록:" << endl;
//        for (auto user : users) {
//            cout << "ID: " << user[0]
//                << ", 이름: " << user[1]
//                << ", 이메일: " << user[2] << endl;
//        }
//
//    }
//    catch (const mysqlx::Error& err) {
//        cerr << "MySQL 오류: " << err.what() << endl;
//        return 1;
//    }
//    catch (const exception& ex) {
//        cerr << "일반 오류: " << ex.what() << endl;
//        return 1;
//    }
//
//    return 0;
//}