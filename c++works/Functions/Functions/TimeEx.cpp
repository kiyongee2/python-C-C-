//#include <iostream>
//#include <ctime>
//#include <thread>  // 스레드 sleep을 위한 라이브러리
//using namespace std;
//
//int main()
//{
//    // 현재 시간을 초 단위로 가져오기
//    time_t now = time(nullptr);
//
//    // 초, 일, 년으로 측정
//    cout << "1970년 1월 1일(0시 0분 0초) 이후: " << now << "초" << endl;
//    cout << "1970년 1월 1일(0시 0분 0초) 이후: " << 
//        now / (24 * 60 * 60) << "일" << endl;
//    cout << "1970년 1월 1일(0시 0분 0초) 이후: " << 
//        now / (365 * 24 * 60 * 60) << "년" << endl;
//
//    // 수행 시간 측정
//    /*time_t start, end;
//
//    time(&start);  // 시작 시간
//
//    // 0.5초 간격으로 1~10 출력
//    for (int i = 1; i <= 10; i++)
//    {
//        cout << i << endl;
//        this_thread::sleep_for(chrono::milliseconds(500));  // 0.5초 대기
//    }
//
//    time(&end);  // 종료 시간
//    cout << "수행시간: " << (end - start) << "초" << endl;*/
//
//    // 수행 시간 측정(소수로 정밀하게)
//    time_t start, end;
//    double elapsedTime;
//
//    //time(&start);  // 시작 시간
//    start = clock();
//
//    // 0.5초 간격으로 1~10 출력
//    for (int i = 1; i <= 10; i++)
//    {
//        cout << i << endl;
//        this_thread::sleep_for(chrono::milliseconds(500));  // 0.5초 대기
//    }
//
//    //time(&end);  // 종료 시간
//    end = clock();
//    elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
//    cout << "수행시간: " << elapsedTime << "초" << endl;
//
//    return 0;
//}
