//#define _CRT_SECURE_NO_WARNINGS  //localtime()
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int main() {
//    // ���� �ð��� �������� ���� time_t ���� ����
//    time_t ct;
//    struct tm* now;  // ���� ��¥�� �ð�(tm ����ü ������ ��ü)
//
//    // ���� �ð� ��������
//    time(&ct);
//    now = localtime(&ct);  // localtime �Լ��� ������
//
//    // ��¥ �� �ð� ���
//    cout << "���� �⵵: " << now->tm_year + 1900 << endl;
//    cout << "���� ��: " << now->tm_mon + 1 << endl;
//    cout << "���� ��: " << now->tm_mday << endl;
//    cout << "���� ��¥: " << now->tm_year + 1900 << ". " << 
//        now->tm_mon + 1 << ". " << now->tm_mday << "." << endl;
//
//    cout << "���� ��: " << now->tm_hour << endl;
//    cout << "���� ��: " << now->tm_min << endl;
//    cout << "���� ��: " << now->tm_sec << endl;
//    cout << "���� �ð�: " << now->tm_hour << " : " << 
//        now->tm_min << " : " << now->tm_sec << "." << endl;
//
//    // ���� ����
//    cout << "���� ����: " << now->tm_wday << endl; // 0-��, 1-��, 2-ȭ...
//
//    // ���� ������ ���(���ǹ� ���)
//    switch (now->tm_wday) {
//    case 0: cout << "������ �Ͽ����Դϴ�." << endl; break;
//    case 1: cout << "������ �������Դϴ�." << endl; break;
//    case 2: cout << "������ ȭ�����Դϴ�." << endl; break;
//    case 3: cout << "������ �������Դϴ�." << endl; break;
//    case 4: cout << "������ ������Դϴ�." << endl; break;
//    case 5: cout << "������ �ݿ����Դϴ�." << endl; break;
//    case 6: cout << "������ ������Դϴ�." << endl; break;
//    default: cout << "���� �����Դϴ�." << endl; break;
//    }
//
//    return 0;
//}
