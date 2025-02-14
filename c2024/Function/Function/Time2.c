//#include <stdio.h>
//#include <time.h>
//#include <Windows.h>
//
//int main()
//{
//    //현재 시간 알기 
//    time_t current_time;
//    current_time = time(NULL);
//    // long current_time = time(NULL);
//
//    printf("1970년 1월 1일(0시 0분 0초) 이후: %ld초\n", current_time);
//    printf("1970년 1월 1일(0시 0분 0초) 이후: %ld일\n", current_time / (24 * 60 * 60));
//    printf("1970년 1월 1일(0시 0분 0초) 이후: %ld년\n", current_time / (365 * 24 * 60 * 60));
//
//    // 수행시간 측정하기
//    time_t start, end;
//
//    start = time(NULL);
//    printf("시작시간: %ld\n", start); //%ld - long decimal
//
//    for (int i = 1; i <= 10; i++) {
//        printf("%d\n", i);
//        Sleep(500);
//    }
//
//    end = time(NULL);
//    printf("종료시간: %ld\n", end);
//
//    // 수행시간
//    printf("수행시간 : %ld초", (end - start));
//}