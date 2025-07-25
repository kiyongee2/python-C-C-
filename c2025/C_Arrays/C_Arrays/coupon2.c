#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void apply(char digit) {

    switch (digit) {
    case '1': case '6':
        printf("신청일은 월요일입니다.\n"); break;
    case '2': case '7':
        printf("신청일은 화요일입니다.\n"); break;
    case '3': case '8':
        printf("신청일은 수요일입니다.\n"); break;
    case '4': case '9':
        printf("신청일은 목요일입니다.\n"); break;
    case '5': case '0':
        printf("신청일은 금요일입니다.\n"); break;
    default:
        printf("유효하지 않은 입력입니다.\n");
    }
}

int main()
{
    char birthYear[5];  // 4자리 + 널문자
    char lastDigit;     // 출생연도 끝자리

    printf("출생연도 입력: ");
    scanf("%s", birthYear);

    if (strlen(birthYear) != 4) {
        printf("출생연도는 4자리여야 합니다.\n");
        return 1;
    }

    lastDigit = birthYear[3]; //출생연도 끝자리

    //함수 호출
    apply(lastDigit);

    /*for (int i = 0; i < 4; i++) {
        if (!isdigit(birthYear[i])) {
            printf("숫자만 입력해야 합니다.\n");
            return 1;
        }
    }*/

    return 0;
}
