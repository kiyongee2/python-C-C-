#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void apply(char digit) {

    switch (digit) {
    case '1': case '6':
        printf("��û���� �������Դϴ�.\n"); break;
    case '2': case '7':
        printf("��û���� ȭ�����Դϴ�.\n"); break;
    case '3': case '8':
        printf("��û���� �������Դϴ�.\n"); break;
    case '4': case '9':
        printf("��û���� ������Դϴ�.\n"); break;
    case '5': case '0':
        printf("��û���� �ݿ����Դϴ�.\n"); break;
    default:
        printf("��ȿ���� ���� �Է��Դϴ�.\n");
    }
}

int main()
{
    char birthYear[5];  // 4�ڸ� + �ι���
    char lastDigit;     // ������� ���ڸ�

    printf("������� �Է�: ");
    scanf("%s", birthYear);

    if (strlen(birthYear) != 4) {
        printf("��������� 4�ڸ����� �մϴ�.\n");
        return 1;
    }

    lastDigit = birthYear[3]; //������� ���ڸ�

    //�Լ� ȣ��
    apply(lastDigit);

    /*for (int i = 0; i < 4; i++) {
        if (!isdigit(birthYear[i])) {
            printf("���ڸ� �Է��ؾ� �մϴ�.\n");
            return 1;
        }
    }*/

    return 0;
}
