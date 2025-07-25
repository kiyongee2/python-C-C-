//#include <stdio.h>
//
//int main() {
//    // 정적 배열 3개 준비 (행)
//    int row1[] = { 1, 2, 3 };
//    int row2[] = { 4, 5, 6 };
//    int row3[] = { 7, 8, 9 };
//
//    // 포인터 배열에 각 행의 시작 주소 저장
//    int* ptrArr[3];  //정수형 타입의 포인터 배열 생성
//    ptrArr[0] = row1;
//    ptrArr[1] = row2;
//    ptrArr[2] = row3;
//
//    // 출력
//    for (int i = 0; i < 3; i++) {          // 행
//        for (int j = 0; j < 3; j++) {      // 열
//            printf("%d ", ptrArr[i][j]);   // 포인터를 통한 2차원 접근
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
