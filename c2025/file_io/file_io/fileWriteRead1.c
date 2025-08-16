//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//    FILE* fp;
//    char str[100];
//
//    // 쓰기
//    fp = fopen("test.txt", "w");
//    if (fp == NULL) {
//        printf("파일 열기 실패\n");
//        return 1;
//    }
//    fprintf(fp, "안녕~ 한강!\n");
//    fclose(fp);
//
//    // 읽기
//    fp = fopen("test.txt", "r");
//    if (fp == NULL) {
//        printf("파일 열기 실패\n");
//        return 1;
//    }
//    fgets(str, sizeof(str), fp);
//    printf("읽은 내용: %s", str);
//    fclose(fp);
//
//    return 0;
//}
