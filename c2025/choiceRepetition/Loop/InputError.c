//#include <stdio.h>
//
//int main()
//{
//    /*
//        숫자 입력시 문자 입력으로 인한 오류 처리 
//    */
//    int num;
//    /*printf("숫자를 입력하세요: ");
//    scanf_s("%d", &num);
//    printf("%d\n", num);*/
//
//    char ch;
//    printf("1개의 문자 입력: ");
//    ch = getchar();  // getchar()는 char를 반환
//    printf("입력한 문자: %c\n", ch);
//
//    /*int ch2;
//    printf("1개의 문자 입력: ");
//    ch2 = getchar();  // getchar()는 int를 반환 (EOF(-1) 처리 위해)
//    printf("입력한 문자: %c\n", (char)ch2);*/
//    
//    //문자 입력시 오류 처리
//    /*while (1) {
//        printf("숫자를 입력하세요: ");
//        if (scanf_s("%d", &num) == 1) {  // 정상 입력 시
//            printf("%d\n", num);
//            break;
//        }
//        // getchar()의 반환 타입은 int인데 문자가 입력되어 오류 발생
//        while (getchar() != '\n');  //엔터('\n')가 나올때까지 모든 문자 제거
//        printf("잘못된 입력입니다!\n");
//    }*/
//
//	return 0;
//}
