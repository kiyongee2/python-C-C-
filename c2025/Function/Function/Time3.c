//#include <stdio.h>
//#include <time.h>
//#include <Windows.h>
//
////마이크로 초(ms) 단위를 초(s)로 나타내려면 CLOCKS_PER_SEC 으로 나눔.?
//int main() {
//    clock_t start, end;
//    double elapsed_time;
//
//    // 시작 시간 기록
//    start = clock();
//
//    // 실행할 코드 (예제: 간단한 루프)
//    for (int i = 1; i <= 10; i++) 
//    {
//        printf("%d\n", i);
//        Sleep(511);
//    }
//
//    // 종료 시간 기록
//    end = clock();
//
//    // 경과 시간 계산 
//    elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
//
//    // 결과 출력
//    printf("수행 시간: %.2f 초\n", elapsed_time);
//
//    return 0;
//}
