#include <iostream>
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/resultset.h>
#include <cppconn/prepared_statement.h>

int main() {
    try {
        // MySQL Driver 초기화
        sql::mysql::MySQL_Driver* driver = sql::mysql::get_mysql_driver_instance();

        // DB 연결
        std::unique_ptr<sql::Connection> conn(
            driver->connect("tcp://127.0.0.1:3306", "username", "password")
        );

        // 데이터베이스 선택
        conn->setSchema("testdb");

        // 쿼리 실행 (테이블 생성 예제)
        std::unique_ptr<sql::Statement> stmt(conn->createStatement());
        stmt->execute("CREATE TABLE IF NOT EXISTS test_table (id INT PRIMARY KEY, name VARCHAR(50))");

        // 데이터 삽입
        std::unique_ptr<sql::PreparedStatement> pstmt(
            conn->prepareStatement("INSERT INTO test_table (id, name) VALUES (?, ?)")
        );
        pstmt->setInt(1, 1);
        pstmt->setString(2, "John Doe");
        pstmt->execute();

        // 데이터 조회
        std::unique_ptr<sql::ResultSet> res(
            stmt->executeQuery("SELECT id, name FROM test_table")
        );

        while (res->next()) {
            std::cout << "ID: " << res->getInt("id")
                << ", Name: " << res->getString("name") << std::endl;
        }
    }
    catch (sql::SQLException& e) {
        std::cerr << "SQLException: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
