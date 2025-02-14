//#include <stdio.h>
//#include <time.h>
//#include <Windows.h>
//
//int main()
//{
//    //time_t 자료형
//    //time_t now = time(NULL);
//    long now = time(NULL);
//
//    //초로 환산 : ld - long decimal
//    printf("1970년 1월 1일(0시 0분 0초) 이후 : %ld초\n", now);
//    //일로 환산
//    printf("1970년 1월 1일(0시 0분 0초) 이후: %ld일\n", now / (24 * 60 * 60));
//    //년으로 환산
//    printf("1970년 1월 1일(0시 0분 0초) 이후: %ld년\n", now / (365 * 24 * 60 * 60));
//    
//    //수행시간 측정하기
//    time_t start, end;
//    //start = time(NULL);  //시작
//    time(&start);
//    printf("시작시간: %ld\n", start); //%ld - long decimal
//
//    //0.5초 간격으로 1 ~ 10 출력
//    for (int i = 1; i < 11; i++) {
//        printf("%d\n", i);
//        Sleep(300);
//    }
//
//    //end = time(NULL);  //종료
//    time(&end);
//    printf("종료시간: %ld\n", end);
//
//    printf("수행시간: %ld초\n", (end-start));
//    //printf("수행시간: %Lf초\n", (long double)(end-start));
//
//    return 0;
//}