//#include <stdio.h>
//
//void printBinLoop(int a) {
//    int bin[32];
//    int i = 0;
//
//    //�迭�� �Ųٷ� ����
//    while (a > 0) {
//        bin[i++] = a % 2;
//        a /= 2;
//    }
//    printf("%d\n", i);
//
//    //������ ���
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