//#include <stdio.h>
//#include <time.h>
//#include <Windows.h>
//
//int main()
//{
//    //���� �ð� �˱� 
//    time_t current_time;
//    current_time = time(NULL);
//    // long current_time = time(NULL);
//
//    printf("1970�� 1�� 1��(0�� 0�� 0��) ����: %ld��\n", current_time);
//    printf("1970�� 1�� 1��(0�� 0�� 0��) ����: %ld��\n", current_time / (24 * 60 * 60));
//    printf("1970�� 1�� 1��(0�� 0�� 0��) ����: %ld��\n", current_time / (365 * 24 * 60 * 60));
//
//    // ����ð� �����ϱ�
//    time_t start, end;
//
//    start = time(NULL);
//    printf("���۽ð�: %ld\n", start); //%ld - long decimal
//
//    for (int i = 1; i <= 10; i++) {
//        printf("%d\n", i);
//        Sleep(500);
//    }
//
//    end = time(NULL);
//    printf("����ð�: %ld\n", end);
//
//    // ����ð�
//    printf("����ð� : %ld��", (end - start));
//}