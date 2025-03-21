//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//    FILE* fp;
//    fp = fopen("seek.txt", "w");
//
//    if (fp == NULL) {
//        printf("파일 열기에 실패함\n");
//        return 1;
//    }
//
//    fputs("APPLE", fp);
//    fclose(fp);
//
//    fp = fopen("seek.txt", "r");
//
//    if (fp == NULL) {
//        printf("파일 열기에 실패함\n");
//        return 1;
//    }
//
//    // 첫 문자 출력
//    fprintf(stdout, "%c \n", fgetc(fp));
//
//    // 2번 인덱스로 이동
//    fseek(fp, 2, SEEK_SET);
//    fprintf(stdout, "%c \n", fgetc(fp));
//
//    // 2번 인덱스로 이동
//    fseek(fp, 3, SEEK_SET);
//    fprintf(stdout, "%c \n", fgetc(fp));
//
//    fclose(fp);
//
//    return 0;
//}
