#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strlen(), strcspn()

int str_chr_all(const char* s, int c) {
    int count = 0; // ã�� ����
    int i;

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == (char)c) {
            printf("%d��° ", i + 1); // 1���� �����ϴ� ��ġ ���
            count++;
        }
    }

    if (count == 0) {
        printf("���� '%c'��(��) ���ڿ��� �����ϴ�.", c);
    }
    putchar('\n');

    return count; // ã�� ���� ��ȯ
}

int main()
{
    char str[128]; // �˻� ��� ���ڿ�
    char tmp[128];
    int ch;        // �˻��� ����
    int found;     // ��ȯ�� ����

    printf("���ڿ�: ");
    fgets(str, sizeof(str), stdin);

    printf("�˻��� ����: ");
    fgets(tmp, sizeof(tmp), stdin);

    ch = tmp[0]; // ù ��° ���ڸ� �˻�

    printf("���� '%c'�� ��ġ: ", ch);
    found = str_chr_all(str, ch);

    printf("�� %d�� �����߽��ϴ�.\n", found);

    return 0;
}
