//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//    FILE* fp;
//    char str[100];
//
//    // ����
//    fp = fopen("test.txt", "w");
//    if (fp == NULL) {
//        printf("���� ���� ����\n");
//        return 1;
//    }
//    fprintf(fp, "�ȳ�~ �Ѱ�!\n");
//    fclose(fp);
//
//    // �б�
//    fp = fopen("test.txt", "r");
//    if (fp == NULL) {
//        printf("���� ���� ����\n");
//        return 1;
//    }
//    fgets(str, sizeof(str), fp);
//    printf("���� ����: %s", str);
//    fclose(fp);
//
//    return 0;
//}
