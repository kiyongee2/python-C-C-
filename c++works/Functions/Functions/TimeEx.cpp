//#include <iostream>
//#include <ctime>
//#include <thread>  // ������ sleep�� ���� ���̺귯��
//using namespace std;
//
//int main()
//{
//    // ���� �ð��� �� ������ ��������
//    time_t now = time(nullptr);
//
//    // ��, ��, ������ ����
//    cout << "1970�� 1�� 1��(0�� 0�� 0��) ����: " << now << "��" << endl;
//    cout << "1970�� 1�� 1��(0�� 0�� 0��) ����: " << 
//        now / (24 * 60 * 60) << "��" << endl;
//    cout << "1970�� 1�� 1��(0�� 0�� 0��) ����: " << 
//        now / (365 * 24 * 60 * 60) << "��" << endl;
//
//    // ���� �ð� ����
//    /*time_t start, end;
//
//    time(&start);  // ���� �ð�
//
//    // 0.5�� �������� 1~10 ���
//    for (int i = 1; i <= 10; i++)
//    {
//        cout << i << endl;
//        this_thread::sleep_for(chrono::milliseconds(500));  // 0.5�� ���
//    }
//
//    time(&end);  // ���� �ð�
//    cout << "����ð�: " << (end - start) << "��" << endl;*/
//
//    // ���� �ð� ����(�Ҽ��� �����ϰ�)
//    time_t start, end;
//    double elapsedTime;
//
//    //time(&start);  // ���� �ð�
//    start = clock();
//
//    // 0.5�� �������� 1~10 ���
//    for (int i = 1; i <= 10; i++)
//    {
//        cout << i << endl;
//        this_thread::sleep_for(chrono::milliseconds(500));  // 0.5�� ���
//    }
//
//    //time(&end);  // ���� �ð�
//    end = clock();
//    elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
//    cout << "����ð�: " << elapsedTime << "��" << endl;
//
//    return 0;
//}
