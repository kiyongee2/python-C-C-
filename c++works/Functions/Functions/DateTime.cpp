//#define _CRT_SECURE_NO_WARNINGS  //localtime()
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int main() {
//    // 현재 시간을 가져오기 위한 time_t 변수 선언
//    time_t ct;
//    struct tm* now;  // 현재 날짜와 시간(tm 구조체 포인터 객체)
//
//    // 현재 시간 가져오기
//    time(&ct);
//    now = localtime(&ct);  // localtime 함수로 포매팅
//
//    // 날짜 및 시간 출력
//    cout << "현재 년도: " << now->tm_year + 1900 << endl;
//    cout << "현재 월: " << now->tm_mon + 1 << endl;
//    cout << "현재 일: " << now->tm_mday << endl;
//    cout << "현재 날짜: " << now->tm_year + 1900 << ". " << 
//        now->tm_mon + 1 << ". " << now->tm_mday << "." << endl;
//
//    cout << "현재 시: " << now->tm_hour << endl;
//    cout << "현재 분: " << now->tm_min << endl;
//    cout << "현재 초: " << now->tm_sec << endl;
//    cout << "현재 시간: " << now->tm_hour << " : " << 
//        now->tm_min << " : " << now->tm_sec << "." << endl;
//
//    // 현재 요일
//    cout << "현재 요일: " << now->tm_wday << endl; // 0-일, 1-월, 2-화...
//
//    // 현재 요일을 출력(조건문 사용)
//    switch (now->tm_wday) {
//    case 0: cout << "오늘은 일요일입니다." << endl; break;
//    case 1: cout << "오늘은 월요일입니다." << endl; break;
//    case 2: cout << "오늘은 화요일입니다." << endl; break;
//    case 3: cout << "오늘은 수요일입니다." << endl; break;
//    case 4: cout << "오늘은 목요일입니다." << endl; break;
//    case 5: cout << "오늘은 금요일입니다." << endl; break;
//    case 6: cout << "오늘은 토요일입니다." << endl; break;
//    default: cout << "없는 요일입니다." << endl; break;
//    }
//
//    return 0;
//}
