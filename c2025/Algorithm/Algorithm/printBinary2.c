//#include <stdio.h>
//
//void printBinLoop(int a) {
//    int bin[32];
//    int i = 0;
//
//    //배열에 거꾸로 저장
//    while (a > 0) {
//        bin[i++] = a % 2;
//        a /= 2;
//    }
//    printf("%d\n", i);
//
//    //뒤집여 출력
//    for (int j = i - 1; j >= 0; j--)
//        printf("%d", bin[j]);
//}
//
//
//int main()
//{
//    int x = 11;
//    printBinLoop(x);  //1011
//
//    return 0;
//}