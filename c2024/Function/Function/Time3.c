//#include <stdio.h>
//#include <time.h>
//
//int main() {
//    time_t start, end;
//    long double elapsed_time;
//
//    // ���� �ð� ���
//    //time(&start);
//    start = time(NULL);
//
//    // ������ �ڵ� (����: ������ ����)
//    //for (volatile long i = 0; i < 1000000000; i++);
//    for (int i = 1; i <= 10; i++) 
//    {
//        printf("%d\n", i);
//        Sleep(500);
//    }
//
//    // ���� �ð� ���
//    //time(&end);
//    end = time(NULL);
//
//    // ��� �ð� ��� (long double �������� ��ȯ)
//    elapsed_time = (long double)(end - start);
//
//    // ��� ���
//    printf("���� �ð�: %.2Lf ��\n", elapsed_time);
//
//    return 0;
//}
