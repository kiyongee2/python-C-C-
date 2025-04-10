//#include <stdio.h>
//#include <time.h>
//#include <windows.h>  // Sleep()을 사용하려면 필요
//
//int main() {
//    clock_t start, end;
//    double elapsed_time;
//
//    start = clock();  // 시작 시간 기록
//
//    for (int i = 0; i < 10; i++) {
//        printf("%d\n", i);
//        Sleep(500);  // 0.5초 대기
//    }
//
//    end = clock();  // 종료 시간 기록
//
//    // 실행 시간 계산 (초 단위, 소수점 3자리까지 출력)
//    elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
//
//    printf("소요 시간: %.2f초\n", elapsed_time);
//
//    return 0;
//}
