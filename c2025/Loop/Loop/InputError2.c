//#include <stdio.h>
//
//int main(void) {
//    printf("문자 입력: ");
//    int ch = getchar();  //반드시 int로 받아야 함
//
//    if (ch == EOF) {
//        printf("입력 오류 또는 파일 끝(EOF) 발생!\n");
//    }
//    else {
//        printf("입력한 문자: %c\n", (char)ch);
//    }
//
//    // 남은 입력 버퍼 비우기
//    while ((ch = getchar()) != '\n' && ch != EOF);
//
//    return 0;
//}