//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//// 구조체 정의
//typedef struct Score {
//    int kor, eng, math;  // 과목
//    int total;
//}Score;
//
//
//int main() {
//    Score s[3] = {
//        {70, 70, 70},
//        {80, 80, 80},
//        {90, 90, 90},
//    };
//
//    Score* p;  //8byte
//    int i;
//
//    p = s; //&s[0]
//
//    //(p + 0)->total = (p + 0)->kor + (p + 0)->eng + (p + 0)->math;
//    //역참조 계산
//    /*p[0].total = p[0].kor + p[0].eng + p[0].math;
//    printf("합계 : %d\n", p[0].total);*/
//
//    for (i = 0; i < 3; i++) {
//        p[i].total = p[i].kor + p[i].eng + p[i].math;
//        printf("p[%d]의 합 : %d\n", i, p[i].total);
//    }
//    
//    return 0;
//}