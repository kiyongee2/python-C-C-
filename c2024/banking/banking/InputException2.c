//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//#include <string.h>
//
//#define MAX_LEN 20  // 계좌번호 최대 길이
//
//// 숫자인지 확인하는 함수
//int isNumber(const char* str) {
//    for (int i = 0; str[i] != '\0'; i++) {
//        if (!isdigit(str[i])) {
//            return 0;  // 숫자가 아닌 문자가 포함됨
//        }
//    }
//    return 1;  // 숫자만 포함됨
//}
//
//int main() {
//    char accountNumber[MAX_LEN];
//
//    while (1) {
//        printf("계좌번호를 입력하세요: ");
//        scanf_s("%s", accountNumber, sizeof(accountNumber));
//
//        // 숫자인지 확인
//        if (isNumber(accountNumber)) {
//            printf("입력된 계좌번호: %s\n", accountNumber);
//            break;  // 올바른 입력이면 루프 종료
//        }
//        else {
//            printf("숫자만 입력해야 합니다. 다시 입력하세요.\n");
//        }
//    }
//
//    return 0;
//}
