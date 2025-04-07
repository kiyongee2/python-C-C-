//#include <iostream>
//using namespace std;
//
//void swapVal(int a, int b);
//void swapRef(int& a, int& b);
//void swapRef2(int* a, int* b);
//int main()
//{
//
//    //참조(&) - 미리 정의된 변수의 실제 이름 대신 사용하는 이름(별칭-alias)
//    int x = 10, y = 20;
//
//    cout << "값에 의한 호출\n";
//    swapVal(x, y);
//    cout << "x = " << x << ", y = " << y << endl;
//
//    cout << "참조에 의한 호출\n";
//    swapRef(x, y);
//    cout << "x = " << x << ", y = " << y << endl;
//
//    /*cout << "포인터에 의한 호출\n";
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