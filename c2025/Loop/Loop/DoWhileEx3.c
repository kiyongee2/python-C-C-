//#include <stdio.h>
//
//int main(void) {
//    int num;
//
//    while (1) {
//        printf("-1 입력시 종료: ");
//
//        // scanf_s로 정수 입력 시도
//        int result = scanf_s("%d", &num);
//
//        // 입력 실패 (문자 입력 등) 또는 EOF (Ctrl+Z/Ctrl+D)
//        if (result != 1) {
//            if (result == EOF) {
//                printf("\n입력이 종료되었습니다. 프로그램을 종료합니다.\n");
//                break;
//            }
//
//            // 잘못된 입력 처리
//            while (getchar() != '\n'); // 버퍼 비우기
//            printf("잘못된 입력입니다. 숫자를 입력해주세요.\n");
//            continue;
//        }
//
//        // -1이 입력되면 종료
//        if (num == -1) {
//            printf("프로그램을 종료합니다.\n");
//            break;
//        }
//
//        // 다른 숫자가 입력된 경우
//        printf("입력된 숫자: %d\n", num);
//    }
//
//    return 0;
//}