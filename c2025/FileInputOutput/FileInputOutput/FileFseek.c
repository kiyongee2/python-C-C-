//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//    FILE* fp;
//    fp = fopen("seek.txt", "w");
//
//    if (fp == NULL) {
//        printf("���� ���⿡ ������\n");
//        return 1;
//    }
//
//    fputs("APPLE", fp);
//    fclose(fp);
//
//    fp = fopen("seek.txt", "r");
//
//    if (fp == NULL) {
//        printf("���� ���⿡ ������\n");
//        return 1;
//    }
//
//    // ù ���� ���
//    fprintf(stdout, "%c \n", fgetc(fp));
//
//    // 2�� �ε����� �̵�
//    fseek(fp, 2, SEEK_SET);
//    fprintf(stdout, "%c \n", fgetc(fp));
//
//    // 2�� �ε����� �̵�
//    fseek(fp, 3, SEEK_SET);
//    fprintf(stdout, "%c \n", fgetc(fp));
//
//    fclose(fp);
//
//    return 0;
//}
