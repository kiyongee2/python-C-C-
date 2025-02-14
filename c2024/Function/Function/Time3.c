//#include <stdio.h>
//#include <time.h>
//
//int main() {
//    time_t start, end;
//    long double elapsed_time;
//
//    // 시작 시간 기록
//    //time(&start);
//    start = time(NULL);
//
//    // 실행할 코드 (예제: 간단한 루프)
//    //for (volatile long i = 0; i < 1000000000; i++);
//    for (int i = 1; i <= 10; i++) 
//    {
//        printf("%d\n", i);
//        Sleep(500);
//    }
//
//    // 종료 시간 기록
//    //time(&end);
//    end = time(NULL);
//
//    // 경과 시간 계산 (long double 형식으로 변환)
//    elapsed_time = (long double)(end - start);
//
//    // 결과 출력
//    printf("수행 시간: %.2Lf 초\n", elapsed_time);
//
//    return 0;
//}
