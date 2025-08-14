//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h> // strlen()
//
//int str_chr(const char* s, int c) {
//    int i = 0;
//    c = (char)c;
//    while (s[i] != c) {
//        if (s[i] == '\0')
//            return -1;  // 검색 실패
//        i++;
//    }
//    return i;  // 검색 성공 (0부터 시작)
//}
//
//int main()
//{
//    char str[128]; // 이 문자열에서 검색
//    char tmp[128];
//    int ch;        // 검색할 문자
//    int idx;
//
//    printf("문자열: ");
//    fgets(str, sizeof(str), stdin);  //공백문자 허용
//
//    printf("검색할 문자: ");
//    fgets(tmp, sizeof(tmp), stdin);
//
//    ch = tmp[0]; // 첫 번째 문자를 검색할 문자로 지정
//
//    if ((idx = str_chr(str, ch)) == -1)
//        printf("문자 '%c'는(은) 문자열에 없습니다.\n", ch);
//    else
//        printf("문자 '%c'는(은) %d번째에 있습니다.\n", ch, idx + 1);
//
//    return 0;
//}
