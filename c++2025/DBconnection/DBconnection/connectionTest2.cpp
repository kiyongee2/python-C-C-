//#include <iostream>
////#include <mysqlx/xdevapi.h> // 이제 정상적으로 포함되어야 함
//#include "C:/Program Files/MySQL/MySQL Connector C++ 8.0/include/mysqlx/xdevapi.h"
//
//using namespace std;
//using namespace mysqlx;
//
//int main() {
//    try {
//        // 연결 문자열 포맷: mysqlx://[user[:password]]@host[:port][/schema]
//        Session sess("mysqlx://cplususer:pwcplus@localhost:33060/cplusdb?ssl-mode=disabled");
//
//        cout << "MySQL 서버에 성공적으로 연결되었습니다!" << endl;
//
//        // 기존 스키마 가져오기 (없으면 예외 발생)
//        Schema db = sess.getSchema("test_db");
//
//        // 컬렉션 생성 (이미 존재하면 기존 컬렉션 반환)
//        Collection users = db.createCollection("users", true);
//
//        // JSON 문서 추가
//        users.add(R"({
//            "name": "홍길동",
//            "email": "hong@example.com",
//            "age": 30,
//            "address": {
//                "city": "서울",
//                "zipcode": "12345"
//            }
//        })").execute();
//
//        // 문서 조회 (조건: age > 20)
//        DocResult docs = users.find("age > 20").execute();
//
//        cout << "\n검색 결과:" << endl;
//        for (auto doc : docs) {
//            cout << "문서: " << doc << endl;
//
//            // 특정 필드 접근
//            cout << "이름: " << doc["name"] << endl;
//            cout << "도시: " << doc["address"]["city"] << endl;
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