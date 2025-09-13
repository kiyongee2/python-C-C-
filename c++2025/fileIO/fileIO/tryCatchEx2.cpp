//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int n1, n2;
//    int quotient, remainder; // 몫, 나머지
//
//    try {
//        cout << "첫번째 수 입력: ";
//        cin >> n1;
//
//        // cin이 실패했는지 확인
//        /*if (cin.fail())
//            throw "잘못된 입력(첫번째 수)";*/
//
//        cout << "두번째 수 입력: ";
//        cin >> n2;
//
//        /*if (cin.fail())
//            throw "잘못된 입력(두번째 수)";*/
//
//        if (n2 == 0)
//            throw n1; // 예외 발생 - 0으로 나눌 수 없음
//
//        quotient = n1 / n2;  // 몫
//        remainder = n1 % n2; // 나머지
//
//        cout << "몫: " << quotient << endl;
//        cout << "나머지: " << remainder << endl;
//    }
//    catch (const char* msg) {
//        cout << "오류: " << msg << endl;
//    }
//    catch (int e_n) {
//        cout << e_n << "은 0으로 나눌 수 없습니다.\n";
//    }
//
//    return 0;
//}
