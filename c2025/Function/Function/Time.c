//#include <stdio.h>
//#include <time.h>
//#include <Windows.h>
//
//int main()
//{
//    //time_t �ڷ���
//    //time_t now = time(NULL);
//    long now = time(NULL);
//
//    //�ʷ� ȯ�� : ld - long decimal
//    printf("1970�� 1�� 1��(0�� 0�� 0��) ���� : %ld��\n", now);
//    //�Ϸ� ȯ��
//    printf("1970�� 1�� 1��(0�� 0�� 0��) ����: %ld��\n", now / (24 * 60 * 60));
//    //������ ȯ��
//    printf("1970�� 1�� 1��(0�� 0�� 0��) ����: %ld��\n", now / (365 * 24 * 60 * 60));
//    
//    //����ð� �����ϱ�
//    time_t start, end;
//    //start = time(NULL);  //����
//    time(&start);
//    printf("���۽ð�: %ld\n", start); //%ld - long decimal
//
//    //0.5�� �������� 1 ~ 10 ���
//    for (int i = 1; i < 11; i++) {
//        printf("%d\n", i);
//        Sleep(300);
//    }
//
//    //end = time(NULL);  //����
//    time(&end);
//    printf("����ð�: %ld\n", end);
//
//    printf("����ð�: %ld��\n", (end-start));
//    //printf("����ð�: %Lf��\n", (long double)(end-start));
//
//    return 0;
//}