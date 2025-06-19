#include <iostream>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

int main() {
    sql::Driver* driver;
    sql::Connection* con;
    sql::Statement* stmt;
    sql::ResultSet* res;

    try {
        driver = get_driver_instance();
        con = driver->connect("tcp://127.0.0.1:3306", "user", "password"); // 주소, 사용자, 비밀번호 설정
        con->setSchema("your_database"); // 사용할 데이터베이스 설정

        stmt = con->createStatement();
        res = stmt->executeQuery("SELECT * FROM your_table"); // 예시 쿼리

        while (res->next()) {
            // 결과 처리 (예: res->getString("column_name"))
            std::cout << res->getString("column_name") << std::endl;
        }

        delete res;
        delete stmt;
        delete con;

    }
    catch (sql::SQLException& e) {
        std::cerr << "MySQL Error: " << e.what() << std::endl;
        std::cerr << " (MySQL error code: " << e.getErrorCode();
        std::cerr << ", SQLState: " << e.getSQLState() << " )" << std::endl;
    }

    return 0;
}