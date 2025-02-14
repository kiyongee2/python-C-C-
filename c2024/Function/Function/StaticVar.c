//#include <stdio.h>
//
//void call();
//
//int main(void)
//{
//    call();
//    call();
//    call();
//
//    return 0;
//}
//
//void call()
//{
//    //int x = 0;  //지역변수
//    static int x = 0;  //정적 변수-전역변수화 함
//
//    x += 1;
//    printf("현재 호출은 %d번째입니다.\n", x);
//}