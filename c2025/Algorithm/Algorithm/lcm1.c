//#include <stdio.h>
//
////최소공배수 계산 알고리즘
//int lcm(int a, int b) {
//    int i = (a > b) ? a : b; // 큰 수부터 시작
//
//    while (1) {
//        if (i % a == 0 && i % b == 0) // a와 b 모두의 배수인지 확인
//            return i;
//        i++;
//    }
//}
///*
//   lcm(4, 6)
//   i=6
//   6%6==0 && 6%4==0, false
//   7%6==0 && 7%4==0, false
//   8%6==0 && 8%4==0, false
//   9%6==0 && 9%4==0, false
//   10%6==0 && 10%4==0, false
//   11%6==0 && 11%4==0, false
//   12%6==0 && 12%4==0, true
//
//*/
//
//int main()
//{
//    printf("LCM: %d\n", lcm(4, 6)); // 12
//    printf("LCM: %d\n", lcm(18, 24)); // 72
//    printf("LCM: %d\n", lcm(48, 180)); // 720
//
//	return 0;
//}
//
