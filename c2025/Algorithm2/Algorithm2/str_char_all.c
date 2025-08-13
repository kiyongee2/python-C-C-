//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h> // strlen(), strcspn()
//
//void str_chr_all(const char* s, int c) {
//    int found = 0; // 찾은 개수
//    int i;
//
//    for (i = 0; s[i] != '\0'; i++) {
//        if (s[i] == (char)c) {
//            printf("%d번째 ", i + 1); // 1부터 시작하는 위치 출력
//            found++;
//        }
//    }
//
//    if (found == 0) {
//        printf("문자 '%c'는(은) 문자열에 없습니다.", c);
//    }
//    printf("\n");
//}
//
//int main()
//{
//    char str[128]; // 검색 대상 문자열
//    char tmp[128];
//    int ch;        // 검색할 문자
//
//    printf("문자열: ");
//    fgets(str, sizeof(str), stdin);
//    str[strcspn(str, "\n")] = '\0'; // 개행 제거
//
//    printf("검색할 문자: ");
//    fgets(tmp, sizeof(tmp), stdin);
//    tmp[strcspn(tmp, "\n")] = '\0';
//
//    ch = tmp[0]; // 첫 번째 문자만 검색
//
//    printf("문자 '%c'의 위치: ", ch);
//    str_chr_all(str, ch);
//
//    return 0;
//}
