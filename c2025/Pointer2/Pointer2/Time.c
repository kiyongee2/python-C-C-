//#include <stdio.h>
//#include <time.h>
//#include <windows.h>  // Sleep()�� ����Ϸ��� �ʿ�
//
//int main() {
//    clock_t start, end;
//    double elapsed_time;
//
//    start = clock();  // ���� �ð� ���
//
//    for (int i = 0; i < 10; i++) {
//        printf("%d\n", i);
//        Sleep(500);  // 0.5�� ���
//    }
//
//    end = clock();  // ���� �ð� ���
//
//    // ���� �ð� ��� (�� ����, �Ҽ��� 3�ڸ����� ���)
//    elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
//
//    printf("�ҿ� �ð�: %.2f��\n", elapsed_time);
//
//    return 0;
//}
