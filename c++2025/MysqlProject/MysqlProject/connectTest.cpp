#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

using namespace std;
using namespace sql;

int main() {
    try {
        // MySQL ����̹� �ε�
        mysql::MySQL_Driver* driver;
        Connection* con;

        // �����ͺ��̽� ����
        driver = mysql::get_mysql_driver_instance();
        con = driver->connect("tcp://127.0.0.1:3306", "username", "password");

        // ���� ���� �޽���
        cout << "MySQL �����ͺ��̽��� ���������� ����Ǿ����ϴ�!" << endl;

        // ����� �����ͺ��̽� ����
        con->setSchema("database_name");

        // ���� ���� ����
        Statement* stmt = con->createStatement();
        ResultSet* res = stmt->executeQuery("SELECT 'Hello, MySQL!' AS message");

        // ��� ó��
        while (res->next()) {
            cout << "MySQL ���� ����: " << res->getString("message") << endl;
        }

        // ���ҽ� ����
        delete res;
        delete stmt;
        delete con;

    }
    catch (SQLException& e) {
        cout << "SQL ���� �߻�: " << e.what() << endl;
        cout << "MySQL ���� �ڵ�: " << e.getErrorCode() << endl;
        cout << "SQL ����: " << e.getSQLState() << endl;
    }

    return 0;
}