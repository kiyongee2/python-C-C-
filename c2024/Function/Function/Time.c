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
//    start = time(NULL);  //����
//    printf("���۽ð�: %ld\n", start); //%ld - long decimal
//
//    //0.5�� �������� 1 ~ 10 ���
//    for (int i = 1; i <= 10; i++) {
//        printf("%d\n", i);
//        Sleep(500);
//    }
//
//    end = time(NULL);  //����
//    printf("����ð�: %ld\n", end);
//
//    printf("����ð�: %ld��\n", (end-start));
//
//    return 0;
//}