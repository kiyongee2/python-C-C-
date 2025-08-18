#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strlen(), strcspn()

int str_chr_all(const char* s, int c) {
    int count = 0; // 찾은 개수
    int i;

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == (char)c) {
            printf("%d번째 ", i + 1); // 1부터 시작하는 위치 출력
            count++;
        }
    }

    if (count == 0) {
        printf("문자 '%c'는(은) 문자열에 없습니다.", c);
    }
    putchar('\n');

    return count; // 찾은 개수 반환
}

int main()
{
    char str[128]; // 검색 대상 문자열
    char tmp[128];
    int ch;        // 검색할 문자
    int found;     // 반환값 저장

    printf("문자열: ");
    fgets(str, sizeof(str), stdin);

    printf("검색할 문자: ");
    fgets(tmp, sizeof(tmp), stdin);

    ch = tmp[0]; // 첫 번째 문자만 검색

    printf("문자 '%c'의 위치: ", ch);
    found = str_chr_all(str, ch);

    printf("총 %d번 등장했습니다.\n", found);

    return 0;
}
