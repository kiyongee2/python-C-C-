#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

using namespace std;
using namespace sql;

int main() {
    try {
        // MySQL 드라이버 로드
        mysql::MySQL_Driver* driver;
        Connection* con;

        // 데이터베이스 연결
        driver = mysql::get_mysql_driver_instance();
        con = driver->connect("tcp://127.0.0.1:3306", "username", "password");

        // 연결 성공 메시지
        cout << "MySQL 데이터베이스에 성공적으로 연결되었습니다!" << endl;

        // 사용할 데이터베이스 선택
        con->setSchema("database_name");

        // 쿼리 실행 예제
        Statement* stmt = con->createStatement();
        ResultSet* res = stmt->executeQuery("SELECT 'Hello, MySQL!' AS message");

        // 결과 처리
        while (res->next()) {
            cout << "MySQL 서버 응답: " << res->getString("message") << endl;
        }

        // 리소스 정리
        delete res;
        delete stmt;
        delete con;

    }
    catch (SQLException& e) {
        cout << "SQL 오류 발생: " << e.what() << endl;
        cout << "MySQL 에러 코드: " << e.getErrorCode() << endl;
        cout << "SQL 상태: " << e.getSQLState() << endl;
    }

    return 0;
}