//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int n1, n2;
//    int quotient, remainder; // ��, ������
//
//    try {
//        cout << "ù��° �� �Է�: ";
//        cin >> n1;
//
//        // cin�� �����ߴ��� Ȯ��
//        /*if (cin.fail())
//            throw "�߸��� �Է�(ù��° ��)";*/
//
//        cout << "�ι�° �� �Է�: ";
//        cin >> n2;
//
//        /*if (cin.fail())
//            throw "�߸��� �Է�(�ι�° ��)";*/
//
//        if (n2 == 0)
//            throw n1; // ���� �߻� - 0���� ���� �� ����
//
//        quotient = n1 / n2;  // ��
//        remainder = n1 % n2; // ������
//
//        cout << "��: " << quotient << endl;
//        cout << "������: " << remainder << endl;
//    }
//    catch (const char* msg) {
//        cout << "����: " << msg << endl;
//    }
//    catch (int e_n) {
//        cout << e_n << "�� 0���� ���� �� �����ϴ�.\n";
//    }
//
//    return 0;
//}
