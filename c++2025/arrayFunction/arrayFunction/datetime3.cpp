//#define _CRT_SECURE_NO_WARNINGS  //localtime()
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int main() {
//    time_t ct = time(nullptr);          // ���� �ð� (�� ����)
//    struct tm* now = localtime(&ct);    // ���� �ð� ��ȯ
//
//    cout << "���� ��¥: ";
//    cout << now->tm_year + 1900 << ". "
//        << now->tm_mon + 1 << ". "
//        << now->tm_mday << endl;
//
//    //24�ð���
//    cout << "���� �ð�: ";
//    cout << now->tm_hour << ". "
//        << now->tm_min << ". "
//        << now->tm_sec << endl;
//
//    // ���� ���
//    //cout << now->tm_wday << endl; //6
//
//    const char* weekdays[] = { "��", "��", "ȭ", "��", "��", "��", "��" };
//   
//    cout << "������ " << weekdays[now->tm_wday] << "���� �Դϴ�.\n";
//
//    //���� ���� ǥ��
//    string ampm = (now->tm_hour < 12) ? "am" : "pm";
//
//    //12 �ð��� ǥ��
//    int hour12 = now->tm_hour % 12;
//    if (hour12 == 0)
//        hour12 = 12;
//
//    cout << "���� �ð�: ";
//    cout << ampm << " " << hour12 << " : "
//        << now->tm_min << " : "
//        << now->tm_sec << endl;
//
//    return 0;
//}
