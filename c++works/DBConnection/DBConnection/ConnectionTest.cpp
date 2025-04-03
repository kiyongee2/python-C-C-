#include <iostream>
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

using namespace std;

int main() {
    // Database configuration
    const string DB_HOST = "tcp://127.0.0.1:3306";
    const string DB_NAME = "javadb";
    const string DB_USER = "javauser";
    const string DB_PASS = "pwjava";

    sql::Driver* driver;
    sql::Connection* conn = nullptr;
    sql::Statement* stmt = nullptr;

    try {
        // Create a MySQL driver instance
        driver = get_driver_instance();

        // Create a connection
        conn = driver->connect(DB_HOST, DB_USER, DB_PASS);

        // Connect to the specific database
        conn->setSchema(DB_NAME);

        cout << "Successfully connected to MySQL database!" << endl;

        // You can execute queries here
        stmt = conn->createStatement();
        // Example query execution:
        // sql::ResultSet* res = stmt->executeQuery("SELECT * FROM your_table");
        // while (res->next()) { ... }

    }
    catch (sql::SQLException& e) {
        cerr << "SQL Error: " << e.what() << endl;
        cerr << "MySQL error code: " << e.getErrorCode() << endl;
        cerr << "SQLState: " << e.getSQLState() << endl;
    }

    // Clean up resources
    if (stmt != nullptr) { delete stmt; }
    if (conn != nullptr) {
        conn->close();
        delete conn;
        cout << "Connection closed" << endl;
    }

    return 0;
}