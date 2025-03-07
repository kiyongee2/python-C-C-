//#include <stdio.h>
//
//void clear_input_buffer() {
//    while (getchar() != '\n'); // 입력 버퍼 비우기
//}
//
//int get_valid_integer() {
//    int num;
//    char ch;
//
//    while (1) {
//        printf("정수를 입력하세요: ");
//        if (scanf_s("%d", &num) == 1) {
//            clear_input_buffer();
//            return num;
//        }
//        else {
//            printf("유효한 정수를 입력하세요.\n");
//            clear_input_buffer();
//        }
//    }
//}
//
//int main() {
//    int number = get_valid_integer();
//    printf("입력한 숫자: %d\n", number);
//    return 0;
//}
