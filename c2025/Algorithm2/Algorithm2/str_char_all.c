//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h> // strlen(), strcspn()
//
//void str_chr_all(const char* s, int c) {
//    int found = 0; // ã�� ����
//    int i;
//
//    for (i = 0; s[i] != '\0'; i++) {
//        if (s[i] == (char)c) {
//            printf("%d��° ", i + 1); // 1���� �����ϴ� ��ġ ���
//            found++;
//        }
//    }
//
//    if (found == 0) {
//        printf("���� '%c'��(��) ���ڿ��� �����ϴ�.", c);
//    }
//    printf("\n");
//}
//
//int main()
//{
//    char str[128]; // �˻� ��� ���ڿ�
//    char tmp[128];
//    int ch;        // �˻��� ����
//
//    printf("���ڿ�: ");
//    fgets(str, sizeof(str), stdin);
//    str[strcspn(str, "\n")] = '\0'; // ���� ����
//
//    printf("�˻��� ����: ");
//    fgets(tmp, sizeof(tmp), stdin);
//    tmp[strcspn(tmp, "\n")] = '\0';
//
//    ch = tmp[0]; // ù ��° ���ڸ� �˻�
//
//    printf("���� '%c'�� ��ġ: ", ch);
//    str_chr_all(str, ch);
//
//    return 0;
//}
