#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    FILE* fp;
    char line[256]; // �� ���� ������ ����
    char target[32]; // �˻��� �ܾ ������ ����
    int isFind = 0; // �ܾ ã�Ҵ��� ���θ� ��Ÿ���� �÷���

    fp = fopen("word.txt", "r");
    if (fp == NULL) {
        printf("���� ���⿡ ������\n");
        return 1;
    }

    while (1) {
        // ����ڷκ��� �˻��� �ܾ� �Է� �ޱ�
        printf("�˻��� �ܾ �Է��ϼ���: ");
        scanf_s("%s", target, sizeof(target));

        // ������ �� �پ� �����鼭 �˻�
        while (fgets(line, sizeof(line), fp)) {
            // �� �ٲ� ���� ����
            line[strcspn(line, "\n")] = '\0';

            // ���� �ٿ� �˻��� �ܾ �ִ��� Ȯ��
            //if (strstr(line, target) != NULL) {
            //    printf("�ܾ ã�ҽ��ϴ�: %s\n", line);
            //    isFind = 1; // �ܾ ã������ ǥ��
            //}

            // ���� ���� �ܾ�� �˻��� �ܾ ��Ȯ�� ��ġ�ϴ��� Ȯ��
            if (strcmp(line, target) == 0) {
                printf("�ܾ ã�ҽ��ϴ�: %s\n", line);
                isFind = 1; // �ܾ ã������ ǥ��
                break; // �ܾ ã�����Ƿ� �ݺ��� ����
            }
        }

        // �ܾ ã�� ���� ���
        if (!isFind) {
            printf("'%s'�� ã�� �� �����ϴ�.\n", target);
            break;
        }
    }

    // ���� �ݱ�
    fclose(fp);

    return 0;
}