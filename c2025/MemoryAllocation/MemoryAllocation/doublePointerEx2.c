//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>  // malloc, free
//
//int main() {
//    int rows, cols;
//    int** matrix;
//
//    // 행과 열 입력 받기
//    printf("행 개수 입력: ");
//    scanf("%d", &rows);
//
//    printf("열 개수 입력: ");
//    scanf("%d", &cols);
//
//    // 이중 포인터를 이용한 동적 메모리 할당
//    matrix = (int**)malloc(rows * sizeof(int*));
//    if (matrix == NULL) {
//        printf("행 메모리 할당 실패!\n");
//        exit(1);
//    }
//
//    for (int i = 0; i < rows; i++) {
//        matrix[i] = (int*)malloc(cols * sizeof(int));
//        if (matrix[i] == NULL) {
//            printf("열 메모리 할당 실패!\n");
//            exit(1);
//        }
//    }
//
//    // 값 입력
//    printf("\n값을 입력하세요 (%d x %d):\n", rows, cols);
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            printf("[%d][%d] = ", i, j);
//            scanf("%d", &matrix[i][j]);
//        }
//    }
//
//    // 출력
//    printf("\n입력된 2차원 배열:\n");
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            printf("%d ", matrix[i][j]);
//        }
//        printf("\n");
//    }
//
//    // 메모리 해제
//    for (int i = 0; i < rows; i++) {
//        free(matrix[i]);
//    }
//    free(matrix);
//
//    return 0;
//}
