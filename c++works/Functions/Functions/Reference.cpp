//#include <iostream>
//using namespace std;
//
//void swapVal(int a, int b);
//void swapRef(int& a, int& b);
//void swapRef2(int* a, int* b);
//int main()
//{
//
//    //����(&) - �̸� ���ǵ� ������ ���� �̸� ��� ����ϴ� �̸�(��Ī-alias)
//    int x = 10, y = 20;
//
//    cout << "���� ���� ȣ��\n";
//    swapVal(x, y);
//    cout << "x = " << x << ", y = " << y << endl;
//
//    cout << "������ ���� ȣ��\n";
//    swapRef(x, y);
//    cout << "x = " << x << ", y = " << y << endl;
//
//    /*cout << "�����Ϳ� ���� ȣ��\n";
//    swapRef2(&x, &y);
//    cout << "x = " << x << ", y = " << y << endl;
//    return 0;*/
//}
//
//void swapVal(int a, int b)
//{
//    int temp;
//    temp = a;
//    a = b;
//    b = temp;
//}
//
//void swapRef(int& a, int& b)
//{
//    int temp;
//    temp = a;
//    a = b;
//    b = temp;
//}
//
//void swapRef2(int* a, int* b)
//{
//    int temp;
//    temp = *a;
//    *a = *b;
//    *b = temp;
//}