#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main() {
    // 현재 시간을 가져오기 위한 time_t 변수 선언
    time_t ct;
    struct tm* now;  //현재 날짜와 시간(tm 구조체 포인터 객체)

    // 현재 시간 가져오기
    //ct = time(NULL);
    time(&ct);
    now = localtime(&ct);  //localtime 함수로 포매팅

    // 날짜 및 시간 출력
    printf("현재 년도: %d\n", now->tm_year + 1900);
    printf("현재 월: %d\n", now->tm_mon + 1);
    printf("현재 일: %d\n", now->tm_mday);
    printf("현재 날짜: %d. %d. %d.\n",
        now->tm_year + 1900, now->tm_mday, now->tm_mday);

    printf("현재 시: %d\n", now->tm_hour);
    printf("현재 분: %d\n", now->tm_min);
    printf("현재 초: %d\n", now->tm_sec);
    printf("현재 시간: %d : %d : %d.\n",
        now->tm_hour, now->tm_min, now->tm_sec);

    //현재 요일
    printf("현재 요일: %d\n", now->tm_wday); //0-일, 1-월, 2-화...

    //현재 요일을 출력(조건문 사용)
    switch (now->tm_wday) {
    case 0: printf("오늘은 일요일입니다."); break;
    case 1: printf("오늘은 월요일입니다."); break;
    case 2: printf("오늘은 화요일입니다."); break;
    case 3: printf("오늘은 수요일입니다."); break;
    case 4: printf("오늘은 목요일입니다."); break;
    case 5: printf("오늘은 금요일입니다."); break;
    case 6: printf("오늘은 토요일입니다."); break;
    default: printf("없는 요일입니다."); break;
    }

    return 0;
}
