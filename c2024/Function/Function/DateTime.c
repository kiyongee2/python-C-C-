#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main() {
    // ���� �ð��� �������� ���� time_t ���� ����
    time_t ct;
    struct tm* now;  //���� ��¥�� �ð�(tm ����ü ������ ��ü)

    // ���� �ð� ��������
    //ct = time(NULL);
    time(&ct);
    now = localtime(&ct);  //localtime �Լ��� ������

    // ��¥ �� �ð� ���
    printf("���� �⵵: %d\n", now->tm_year + 1900);
    printf("���� ��: %d\n", now->tm_mon + 1);
    printf("���� ��: %d\n", now->tm_mday);
    printf("���� ��¥: %d. %d. %d.\n",
        now->tm_year + 1900, now->tm_mday, now->tm_mday);

    printf("���� ��: %d\n", now->tm_hour);
    printf("���� ��: %d\n", now->tm_min);
    printf("���� ��: %d\n", now->tm_sec);
    printf("���� �ð�: %d : %d : %d.\n",
        now->tm_hour, now->tm_min, now->tm_sec);

    //���� ����
    printf("���� ����: %d\n", now->tm_wday); //0-��, 1-��, 2-ȭ...

    //���� ������ ���(���ǹ� ���)
    switch (now->tm_wday) {
    case 0: printf("������ �Ͽ����Դϴ�."); break;
    case 1: printf("������ �������Դϴ�."); break;
    case 2: printf("������ ȭ�����Դϴ�."); break;
    case 3: printf("������ �������Դϴ�."); break;
    case 4: printf("������ ������Դϴ�."); break;
    case 5: printf("������ �ݿ����Դϴ�."); break;
    case 6: printf("������ ������Դϴ�."); break;
    default: printf("���� �����Դϴ�."); break;
    }

    return 0;
}
