//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>  // malloc, free
//
//int main() {
//    int rows, cols;
//    int** matrix;
//
//    // ��� �� �Է� �ޱ�
//    printf("�� ���� �Է�: ");
//    scanf("%d", &rows);
//
//    printf("�� ���� �Է�: ");
//    scanf("%d", &cols);
//
//    // ���� �����͸� �̿��� ���� �޸� �Ҵ�
//    matrix = (int**)malloc(rows * sizeof(int*));
//    if (matrix == NULL) {
//        printf("�� �޸� �Ҵ� ����!\n");
//        exit(1);
//    }
//
//    for (int i = 0; i < rows; i++) {
//        matrix[i] = (int*)malloc(cols * sizeof(int));
//        if (matrix[i] == NULL) {
//            printf("�� �޸� �Ҵ� ����!\n");
//            exit(1);
//        }
//    }
//
//    // �� �Է�
//    printf("\n���� �Է��ϼ��� (%d x %d):\n", rows, cols);
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            printf("[%d][%d] = ", i, j);
//            scanf("%d", &matrix[i][j]);
//        }
//    }
//
//    // ���
//    printf("\n�Էµ� 2���� �迭:\n");
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            printf("%d ", matrix[i][j]);
//        }
//        printf("\n");
//    }
//
//    // �޸� ����
//    for (int i = 0; i < rows; i++) {
//        free(matrix[i]);
//    }
//    free(matrix);
//
//    return 0;
//}
